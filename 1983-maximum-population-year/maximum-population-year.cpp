class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int max_population = INT_MIN;
        int max_year = INT_MIN;
        int cur = 0;
        vector<int> death;
        sort(logs.begin(),logs.end());
        for(auto &x : logs)
        {
            death.push_back(x[1]);
        }
        sort(death.begin(),death.end());
        int i = 0;
        for(auto &x : logs)
        {
            cur++;
            while(i<death.size() && death[i]<=x[0])
            {
                cur--;
                i++;
            }
            if(cur > max_population)
            {
                max_population = cur;
                max_year = x[0];
            }
        }
        return max_year;

        
    }
};