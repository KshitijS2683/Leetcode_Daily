class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> inp;

        for (int x : nums) {
            inp[x]++;
        }

        int ans = 0;

        for (auto &p : inp) {
            int num = p.first;
            int freq = p.second;

            auto it = inp.find(num + 1);

            if (it != inp.end()) {
                ans = max(ans, freq + it->second);
            }
        }

        return ans;
    }
};