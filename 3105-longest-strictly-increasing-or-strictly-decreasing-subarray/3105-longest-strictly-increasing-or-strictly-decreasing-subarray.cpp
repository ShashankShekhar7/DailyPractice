class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int cnt1=0;int cnt2=0; int maxi=0;

        for(int i=0; i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                cnt2++;
                cnt1=0;
                maxi=max(cnt2,maxi);
            }
            else if(nums[i]>nums[i+1]){
                cnt1++;
                cnt2=0;
                maxi=max(cnt1,maxi);
            }
            else{
                cnt1=0;
                cnt2=0;
            }
        }
        return maxi+1;
    }
};