class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>anmol;
        int len=0;
        int n=s.size();
        int left=0;

        for(int right=0;right<n;right++){
            while(anmol.find(s[right])!=anmol.end()){
                anmol.erase(s[left]);
                left++;
            }
            
                anmol.insert(s[right]);
                len=max(len,right-left+1);
            
        }
        return len;

    }
};