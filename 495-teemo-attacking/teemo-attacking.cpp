class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int out = 0;
        int currend = 0;
        for(int i = 0;i<timeSeries.size();i++)
        {
            int attackend = timeSeries[i] + duration -1;
            out += attackend - max(currend,timeSeries[i]) + 1;
            currend = attackend+1;
        }
        return out;
    }
};