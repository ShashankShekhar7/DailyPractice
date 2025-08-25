class Solution {
public:
    bool isAnagram(string s, string t) {
        // if(s.length()!=t.length()){
        //     return false;
        // }
    
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // for(int i=0;i<s.length();i++){
        //     if(s[i]!=t[i]){
        //         return false;
        //     }
        // }
        // return true;

        //This approach take n log n that make it inefficent for larger arrays

        // HashMap-> Store the count in the hash map or a freq array and compare the counts;


        if(s.length()!=t.length()){
            return false;
        }

        vector<int>freq(26,0);

        for(char c:s) freq[c-'a']++;

        for (char c:t) freq[c-'a']--;

        for(int count:freq){
            if(count!=0) return false;
        }
        return true;
    }
};