15. 3Sum
Solved
Medium
Topics
premium lock icon
Companies
Hint
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
Example 2:

Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.
Example 


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int n = nums.size();

        vector<vector<int>> ans;

        for(int i=0; i<n; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;

            int j = i+1, k = n-1;

            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];

                if(sum == 0){
                    vector<int> trip = {nums[i], nums[j], nums[k]};
                    ans.push_back(trip);
                    j++;
                    k--;

                   while(j < k && nums[j] == nums[j-1]) j++;
                   while(k > j && nums[k] == nums[k+1]) k--;
                }

                else if(sum < 0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return ans;
        
        
    }
};













class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for(int i=0; i<n; i++){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }

            int j = i+1, k = n-1;

            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];

                if(sum == 0){
                    vector<int> trip = {nums[i], nums[j], nums[k]};
                    ans.push_back(trip);
                    j++, k--;

                    while(j < k && nums[j] == nums[j-1]) j++;
                    while(k > j && nums[k] == nums[k+1]) k--;
                }
                else if(sum > 0){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return ans;
    }
};












class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();

        set<vector<int>>st;

        for(int i=0; i<n; i++){
            set<int>sst;
            for(int j=i+1; j<n; j++){
                int third = -(nums[i] + nums[j]);
                if(sst.find(third) != sst.end()){
                    vector<int> trip = {nums[i], nums[j], third};
                    sort(trip.begin(), trip.end());
                    st.insert(trip);
                }
                sst.insert(nums[j]);
            }
        }
        vector<vector<int>>ans(st.begin(), st.end());
        return ans;
    }
};












class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        set<vector<int>>st;
        int n = nums.size();

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int k=j+1; k<n; k++){

                    if(nums[i] + nums[j] + nums[k] == 0){
                        vector<int> temp = {nums[i], nums[j], nums[k]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }

                }
            }
        }
       vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};








class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        vector<vector<int>> ans;

        set<vector<int>>st;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int k = j+1; k<n; k++){

                    if(nums[i] + nums[j] + nums[k] == 0){
                        vector<int> trip = {nums[i] , nums[j] , nums[k]};
                        sort(trip.begin(), trip.end());


                        if(st.find(trip) == st.end()){
                            st.insert(trip);
                            ans.push_back(trip);
                        }
                    }
                }
            }
        }
        return ans;
    }
};


















