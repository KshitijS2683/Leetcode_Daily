class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int,int> inp;
        for(int i = 0;i<time.size();i++)
        {
            inp[time[i]%60]++;
        }
        long long count = 0;
        for(int i = 0;i<time.size();i++)
        {
            int rem = time[i]%60;
            if(inp[(60-rem)%60])
            {
                count += inp[(60-rem)%60];
                if(rem == (60-rem)%60)
                {
                    count--;
                }
            }
        }
        return count/2;
        
    }
};