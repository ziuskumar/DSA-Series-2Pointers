977. Squares of a Sorted Array
Solved
Easy
Topics
premium lock icon
Companies
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

 

Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
Example 2:

Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(n);

        int l = 0, r = n-1;

        for(int i=n-1; i>=0; i--){
            if(abs(nums[l]) > abs(nums[r])){
                ans[i] = 1LL * nums[l] * nums[l];
                l++;
            }
            else{
                ans[i] = 1LL * nums[r] * nums[r];
                r--;
            }
        }
        return ans;
    }
};











class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int l = 0, r = n-1;

        for(int i=n-1; i>=0; i--){

            if(abs(nums[l]) > abs(nums[r])){
                ans[i] = 1LL* nums[l] * nums[l];
                l++;
            }
            else{
                ans[i] = 1LL* nums[r] * nums[r];
                r--;
            }
        }
//         return ans;
//     }
// };








class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int l = 0, r = n-1;

        for(int i=n-1; i>=0; i--){

            if(abs(nums[l]) > abs(nums[r])){
                ans[i] =1LL * nums[l] * nums[l];
                l++;
            }
            else{
                ans[i] =1LL * nums[r] * nums[r];
                r--;
            }
        }
        return ans;
    }
};











// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans(n);

//         for(int i=0; i<n; i++){
//             nums[i] =1LL * nums[i] * nums[i];
//         }

//         int l = 0;
//         int r = n-1;

//         for(int i=n-1; i>=0; i--){
//             if(nums[l] > nums[r]){
//                 ans[i] = nums[l];
//                 l++;
//             }
//             else{
//                 ans[i] = nums[r];
//                 r--;
//             }
//         }
//         return ans;
//     }
// };






// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans(n);

//         int l = 0, r = n-1;

//         for(int i=n-1; i>=0; i--){

//             if(abs(nums[l]) > abs(nums[r])){
//                 ans[i] =1LL * nums[l] * nums[l];
//                 l++;
//             }
//             else{
//                 ans[i] =1LL * nums[r] * nums[r];
//                 r--;
//             }
//         }
//         return ans;
//     }
// };














// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
        
//         int n = nums.size();

//         vector<int> ans;
//         int n1 = ans.size();

//         for(int i=0; i<n; i++){
//             nums[i] = nums[i] * nums[i];
//         }

//         int head = 0;
//         int tail = n-1;

//         for(int pos = n; pos >= 0; pos--){

//             if(nums[head] > nums[tail]){
//                 ans[pos] = nums[head];

//                 head++;
//             }

//             else{
//                 ans[pos] = nums[tail];

//                 tail--;
//             }
//         }

//         return ans;
//     }
// };









// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans;

//         for(int i=0; i<n; i++){
//            ans.push_back(nums[i] * nums[i]);
//         }
        
//         sort(ans.begin(), ans.end());

//         return ans;
        
//     }

// };
