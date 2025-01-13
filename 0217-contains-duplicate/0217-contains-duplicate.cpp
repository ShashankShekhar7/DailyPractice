class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        int m=nums.size();
        for(int i=0;i<m;i++){
            mp[nums[i]]++;
        }
        for(auto i:mp){
        if(i.second>=2){
            return true;
        }

        }
        return false;
    }
};