class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mini=INT_MIN;
        int sum=0;

        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];


            if(sum>mini){
                mini=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return mini;
    }
};