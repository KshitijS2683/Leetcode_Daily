class Solution {
public:
    int sumDistance(vector<int>& nums, string s, int d) {

        const long long MOD = 1'000'000'007;
        int n = nums.size();

        vector<long long> pos(n);

        // 1) move WITHOUT modulo
        for (int i = 0; i < n; i++) {
            if (s[i] == 'L') pos[i] = nums[i] - (long long)d;
            else pos[i] = nums[i] + (long long)d;
        }

        // 2) sort real positions
        sort(pos.begin(), pos.end());

        // 3) compute sum of pairwise distances mod MOD
        long long ans = 0;

        for (int i = 1; i < n; i++) {
            long long gap = pos[i] - pos[i-1];           // real difference
            long long left = i;
            long long right = n - i;

            long long contrib = ((gap % MOD + MOD) % MOD); // make positive
            contrib = (contrib * left) % MOD;
            contrib = (contrib * right) % MOD;

            ans = (ans + contrib) % MOD;
        }

        return (int)ans;
    }
};
