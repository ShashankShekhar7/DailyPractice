class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>mpp;

        int left=0;

        int n=s.size();
        int res=0;

        for(int right=0;right<n;right++){
            while(mpp.find(s[right])!=mpp.end()){
                mpp.erase(s[left]);
                left++;
            }
            mpp.insert(s[right]);
            res=max(res,right-left+1);
            
        }
        return res;
    }
};