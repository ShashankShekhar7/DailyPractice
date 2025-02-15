class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1){
            return;
        }
        int left =0;
        int right=0;
        for(int i=0;i<nums.size();i++){
            if(nums[right]!=0){
               swap(nums[left],nums[right]);
               left++;
            }
            right++;
        }
    }
};