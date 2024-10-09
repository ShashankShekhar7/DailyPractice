class Solution {
public:
    int minAddToMakeValid(string s) {
    //     char ct1=0;
    //     char ct2=0;
    //     for(char c:s){
    //         if(c=='('){
    //             ct1++;
    //         }
    //         else {
    //             ct2++;
    //         }
    //     }
    //     return abs(ct1-ct2);
    // }

    stack<char>st;
    for(char c:s){
        if(!st.empty()){
            if(c==')' && st.top()=='('){
                st.pop();
                continue;
            }
        }
    
    st.push(c);
    }
    return st.size();
}
};