class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& cordinates) {
        long long dx = (long long)cordinates[1][0] - cordinates[0][0];
        long long dy = (long long)cordinates[1][1] - cordinates[0][1];

        for (int i = 2; i < cordinates.size(); i++) {
            long long currDx = (long long)cordinates[i][0] - cordinates[0][0];
            long long currDy = (long long)cordinates[i][1] - cordinates[0][1];

            if (currDx * dy != currDy * dx) {
                return false;
            }
        }
        return true;
    }
};