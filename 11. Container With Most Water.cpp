You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

 

Example 1:


Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
Example 2:

Input: height = [1,1]

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0, r = n-1;
        int maxwater = 0;

        while(l < r){
            int w = r - l;
            int ht = min(height[l] , height[r]);
            int currwater = w * ht;

            maxwater = max(maxwater, currwater);
            if(height[l] < height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxwater;
    }
};


class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxwater = 0;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){

                int w = j - i;
                int ht = min(height[i], height[j]);
                int currwater = ht * w;

                maxwater = max(maxwater, currwater);
            }
        }
        return maxwater;
    }
};
