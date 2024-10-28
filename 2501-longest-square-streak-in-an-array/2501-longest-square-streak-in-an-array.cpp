class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());

        int maxStreak=0;

        for(int num:nums){

            int streak=0;
            long long curr=num;
            while(st.find(curr)!=st.end()){
                streak++;
                if(curr*curr>1e5){
                    break;
                }
                curr=curr*curr;

            }
            maxStreak=max(maxStreak,streak);
        }
        if(maxStreak<2){
            return -1;
        }
        else{
        return maxStreak;
        }
        
    }
};