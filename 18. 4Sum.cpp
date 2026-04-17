-------------------------OPTIMAL----------------------------
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        // set<vector<int>> st;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for(int i=0; i<n; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;

            for(int j=i+1; j<n; j++){
                if(j > i+1 && nums[j] == nums[j-1]) continue;

                int k = j+1;
                int l = n-1;

                while(k < l){
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];

                    if(sum == target){
                        vector<int> quad = {nums[i], nums[j], nums[k], nums[l]};
                        ans.push_back(quad);
                        k++, l--;

                        while(k < l && nums[k] == nums[k-1]) k++;
                        while(k < l && nums[l] == nums[l+1]) l--;


                    }
                    else if(sum < target){
                        k++;
                    }
                    else{
                        l--;
                    }
                }
            }
        }
        return ans;
        
    }
};












-------------------------------BETTER--------------------------------------
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        set<vector<int>>st;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                set<long long> hset;
                for(int k=j+1; k<n; k++){
                    long long sum = nums[i] + nums[j];
                    sum += nums[k];
                    
                    long long fourth = target - (sum);
                    
                    if(hset.find(fourth) != hset.end()){
                        vector<int> quad = {nums[i], nums[j], nums[k], (int(fourth))};
                        sort(quad.begin(), quad.end());
                        st.insert(quad);
                    }
                    hset.insert(nums[k]);
                }
            }
        }
        vector<vector<int>>ans (st.begin(), st.end());
        return ans;
    }
};











----------------------------BRuTEEEE-----------------------------
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        set<vector<int>>st;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    for(int l=k+1; l<n; l++){
                        long long sum = nums[i] + nums[j];
                        sum += nums[k];
                        sum += nums[l];
                        if(sum == target){
                            vector<int> quad = {nums[i] , nums[j] , nums[k] ,nums[l]};
                            sort(quad.begin(), quad.end());
                            st.insert(quad);
                        }
                    }
                }
            }
        }
        vector<vector<int>>ans(st.begin(), st.end());
        return ans;
    }
};

Accepted
Runtime: 0 ms
Case 1
Case 2
Input
nums =
[1,0,-1,0,-2,2]
target =
0
Output
[[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
Expected
[[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
