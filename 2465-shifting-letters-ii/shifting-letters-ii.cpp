class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int> diff(n + 1, 0);

        for (auto &v : shifts) {
            int l = v[0], r = v[1];
            int val = (v[2] == 1) ? 1 : -1;

            diff[l] += val;
            diff[r + 1] -= val;
        }

        int cur = 0;
        for (int i = 0; i < n; i++) {
            cur += diff[i];
            cur = (cur % 26 + 26) % 26;

            s[i] = char('a' + (s[i] - 'a' + cur) % 26);
        }

        return s;
    }
};
