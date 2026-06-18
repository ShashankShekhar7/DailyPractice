class Solution {
public:

    bool solve(string &s, int start, int end){
        if(start>=end){
            return true;
        }
        if(s[start]!=s[end]) return false;
        return solve(s,start+1,end-1);

    }
    bool isPalindrome(string s) {
        
        string temp="";
        for(char ch:s){
            if(isalnum(ch)){
                temp+=tolower(ch);
            }
        }
        return solve(temp,0,temp.size()-1);
    }
};