class Solution {
public:
    int digArtifacts(int n, vector<vector<int>>& artifacts, vector<vector<int>>& dig) {
        map<pair<int, int>, int> inp;

        for (int i = 0; i < dig.size(); i++) {
            inp[{dig[i][0], dig[i][1]}] = 1;
        }

        int count = 0;

        for (int i = 0; i < artifacts.size(); i++) {
            int r1 = artifacts[i][0];
            int c1 = artifacts[i][1];
            int r2 = artifacts[i][2];
            int c2 = artifacts[i][3];

            bool possible = true;

            for (int r = r1; r <= r2; r++) {
                for (int c = c1; c <= c2; c++) {
                    if (inp[{r, c}] == 0) {
                        possible = false;
                        break;
                    }
                }

                if (!possible) {
                    break;
                }
            }

            if (possible) {
                count++;
            }
        }

        return count;
    }
};