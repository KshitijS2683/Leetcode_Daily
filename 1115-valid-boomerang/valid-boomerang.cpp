class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        double slope1,slope2;
        if(points[0] == points[1] || points[0] == points[2] || points[1] == points[2])
        {
            return false;
        }
        if((points[1][1] - points[0][1]) != 0)
        {
            slope1 = (double)(points[1][0] - points[0][0])/((points[1][1] - points[0][1]));
        }
        else
        {
            slope1 =INT_MAX;
        }
        if((points[2][1] - points[1][1]) != 0)
        {
            slope2 = (double)(points[2][0] - points[1][0])/((points[2][1] - points[1][1]));
        }
        else
        {
            slope2 =INT_MAX;
        }
        if(slope1 != slope2)
        {
            return true;
        }
        return false;
        
    }
};