class Solution {
public:

    void findSub(int ind, vector<int>&nums, vector<vector<int>>&ansList,vector<int>&ds){
        ansList.push_back(ds);
        for(int i=ind;i<nums.size();i++){
            if(i>ind && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            findSub(i+1,nums,ansList,ds);
            ds.pop_back();
        }
    }


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>anslist;
        vector<int>ds;

        findSub(0,nums,anslist,ds);
        return anslist;

        
        
    }
};