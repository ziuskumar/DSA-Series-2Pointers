125. Valid Palindrome
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int nums3[n+m];
        int left = 0;
        int right = 0;
        int idx = 0;

        while(left < m && right <n){
            if(nums1[left] <= nums2[right]){
                nums3[idx] = nums1[left];
                left++, idx++;
            }
            else{
                nums3[idx] = nums2[right];
                right++, idx++;
            }
        }

        while(left < m){
            nums3[idx] = nums1[left];
            left++, idx++;
        }

        while(right < n){
            nums3[idx] = nums2[right];
            right++, idx++;
        }

        for(int i=0; i<n+m; i++){
            // if(i < n){
                nums1[i] = nums3[i];
            // }
            // else{
            //     nums2[i - n] = nums3[i];
            // }
        }
    }
};
