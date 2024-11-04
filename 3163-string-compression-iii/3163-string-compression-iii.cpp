class Solution {
public:
    string compressedString(string word) {
        int n = word.size();
        string result;

        for (int i = 0, j = 0; i < n; i = j) {
            int count = 0;
            while (j < n && word[j] == word[i] && count < 9) {
                ++j;
                ++count;
            }
            result += to_string(count) + word[i];
        }

        return result;
    }
};