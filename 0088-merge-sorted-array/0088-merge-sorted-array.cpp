class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> newa(m + n);
        for (int i = 0; i < m; i++) {
            newa[i] = nums1[i];
        }
        for (int i = 0; i < n; i++) {
            newa[m + i] = nums2[i];
        }
        sort(newa.begin(), newa.end());
        for (int i = 0; i < m + n; i++) {
            nums1[i] = newa[i];
        }
    }
};
