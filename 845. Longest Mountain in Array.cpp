
Code


Testcase
Testcase
Test Result
845. Longest Mountain in Array
Solved
Medium
Topics
premium lock icon
Companies
You may recall that an array arr is a mountain array if and only if:

arr.length >= 3
There exists some index i (0-indexed) with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
Given an integer array arr, return the length of the longest subarray, which is a mountain. Return 0 if there is no mountain subarray.

 

Example 1:

Input: arr = [2,1,4,7,3,2,5]
Output: 5
Explanation: The largest mountain is [1,4,7,3,2] which has length 5.
Example 2:

Input: arr = [2,2,2]
Output: 0
Explanation: There is no mountain






-------------------------------------------------OPTIMAL--------------------------------------------------------
  class Solution {
public:
    int longestMountain(vector<int>& arr) {
        
        int n = arr.size();
        int ans = 0;
        int i = 0;

        while(i < n-1){

            int up = 0, down = 0;

            while(i< n-1 && arr[i] < arr[i+1]){
                up++;
                i++;
            }

            while(i < n-1 && arr[i] > arr[i+1]){
                down++;
                i++;
            }

            if(up > 0 && down > 0){
                ans = max(ans, up+down+1);
            }

            if(i < n-1 && arr[i] == arr[i+1]){
                i++;
            }

        }
        return ans;
    }
};

--------------------------brute-------------------------------


class Solution {
public:
    int longestMountain(vector<int>& arr) {
        
        int n = arr.size();
        int ans = 0;

        for(int i=1; i<n-1; i++){
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){

                int cnt = 1;

                int j = i;
                while(j > 0 && arr[j] > arr[j-1]){
                    j--;
                    cnt++;
                }

                int k = i;
                while(k < n-1 && arr[k] > arr[k+1]){
                    k++;
                    cnt++;
                }
                // int len = k - j + 1;
                ans = max(ans, cnt);
            }
        }
        return ans;
    }
};




