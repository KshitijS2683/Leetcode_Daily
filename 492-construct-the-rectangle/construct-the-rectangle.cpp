class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> out;
        for(int i = 1;i<=area;i++)
        {
            if(area%i == 0)
            {
                if(out.empty())
                {
                    out = {max(i,area/i),min(i,area/i)};
                }
                else if(abs((area/i) - i) < (out[0]-out[1]))
                {
                    out = {max(i,area/i),min(i,area/i)};
                }
            }
        }
        return out;
        
    }
};