class Solution {
public:
    bool rotateString(string s, string goal) {

    if(s.size()!=goal.size()) return false;

    string doublee=s+s;

    if(doublee.find(goal)!=string::npos){
        return true;
    } 
    else{
        return false;
    }

    }
};