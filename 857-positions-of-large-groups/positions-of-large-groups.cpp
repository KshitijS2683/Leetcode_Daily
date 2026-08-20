class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> inp,out;
        int i = 1;
        inp.push_back({0,0});
        while(i < s.size())
        {
            if(s[i] == s[i-1])
            {
                inp.back()[1]++;
            }
            else
            {
                inp.push_back({i,i});
            }
            i++;
        }
        for(auto &x : inp)
        {
            if(x[1] - x[0] >= 2)
            {
                out.push_back(x);
            }
        }
        return out;
        
    }
};