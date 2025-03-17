class Solution {
public:
    vector<vector<int>>res;
    void solve(int idx,vector<int>& nums,vector<int>&temp){
        if(idx<0){
            res.push_back(temp);
            return ;
        }
        temp.push_back(nums[idx]);
        solve(idx-1,nums,temp);
        temp.pop_back();
        solve(idx-1,nums,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        solve(n-1,nums,temp);
        return res;
        
    }
};