class Solution {
public:
    int largestCombination(std::vector<int>& candidates) {
        int ans = 0;

        // Iterate over each bit position
        for (int i = 0; i < 32; ++i) {
            int t = 0; // Counter for the current bit position

            // Count the number of candidates having the i-th bit set
            for (int x : candidates) {
                t += (x >> i) & 1; // Check if the i-th bit is set
            }

            // Update the maximum count of combinations
            ans = std::max(ans, t);
        }

        return ans; // Return the maximum found
    }
};