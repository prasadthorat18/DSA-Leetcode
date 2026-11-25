
class Solution {
public:
    int smallestUniqueSubarray(vector<int>& nums) {

        int n = nums.size();

        const long long B1 = 100019;
        const long long B2 = 100043;
        const long long M1 = 1000000007;
        const long long M2 = 1000000009;

        auto check = [&](int len) {

            unordered_map<long long, int> mp;

            long long h1 = 0, h2 = 0;
            long long p1 = 1, p2 = 1;

            // Calculate B^len
            for (int i = 0; i < len; i++) {
                p1 = (p1 * B1) % M1;
                p2 = (p2 * B2) % M2;
            }

            // Calculate first window hash
            for (int i = 0; i < len; i++) {
                h1 = (h1 * B1 + nums[i]) % M1;
                h2 = (h2 * B2 + nums[i]) % M2;
            }

            mp[h1 * M2 + h2]++;

            // Slide the window
            for (int i = len; i < n; i++) {

                h1 = (h1 * B1 - nums[i-len] * p1 % M1
                      + nums[i] + M1) % M1;

                h2 = (h2 * B2 - nums[i-len] * p2 % M2
                      + nums[i] + M2) % M2;

                mp[h1 * M2 + h2]++;
            }

            // Check if any subarray occurs once
            for (auto it : mp) {
                if (it.second == 1)
                    return true;
            }

            return false;
        };

        // Binary search
        int low = 1, high = n;

        while (low < high) {

            int mid = low + (high - low) / 2;

            if (check(mid))
                high = mid;
            else
                low = mid + 1;
        }

        return low;
    }
};
