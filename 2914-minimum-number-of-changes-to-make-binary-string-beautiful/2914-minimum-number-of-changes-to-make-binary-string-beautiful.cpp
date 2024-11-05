class Solution {
public:
    int minChanges(string s) {
        int chng = 0;
        int n = s.size();

        for (int i = 0; i < n; i += 2) {

            if (s[i] == '1') {
                if (s[i + 1] == '0') {
                    s[i + 1] = '1';
                    chng++;
                }
            }

            if (s[i] == '0') {
                if (s[i + 1] == '1') {
                    s[i + 1] = '0';
                    chng++;
                }
            }
        }
        return chng;
    }
}
;