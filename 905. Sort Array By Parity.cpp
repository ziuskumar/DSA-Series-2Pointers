Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

Return any array that satisfies this condition.

 

Example 1:

Input: nums = [3,1,2,4]
Output: [2,4,3,1]
Explanation: The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
Example 2:

Input: nums = [0]
Output: [0]

  ------------------OPTIMAL APPROACH---------------------
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int n = nums.size();
        int l = 0, r = n - 1;

        while(l < r){
            if(nums[l] % 2 == 0){
                l++;
            }
            else if(nums[r] % 2 == 1){
                r--;
            }
            else{
                swap(nums[l], nums[r]);
                l++, r--;
            }
        }
        return nums;
    }
};










----------------------------------BRUTE-----------------------------
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> odd;
        vector<int> even;
        vector<int> ans(n);

        for(int i=0; i<n; i++){
            if(nums[i] % 2 == 0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }

        for(int i=0; i<even.size(); i++){
            ans[i] = even[i];
        }

        for(int i=even.size(); i<n; i++){
            ans[i] = odd[i- even.size()];
        }
        return ans;
    }
};
