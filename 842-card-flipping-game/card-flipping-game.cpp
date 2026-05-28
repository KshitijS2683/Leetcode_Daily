class Solution {
public:
    int flipgame(vector<int>& fronts, vector<int>& backs) {
        set<int> no;
        // unordered_map<int,int> inp;
        // for(int i = 0;i<fronts.size();i++)
        // {
        //     inp[fronts[i]]++;
        //     inp[backs[i]]++;
        // }
        for(int i = 0;i<fronts.size();i++)
        {
            if(fronts[i] == backs[i])
            {
                no.insert(fronts[i]);
            }
        }
        int result = INT_MAX;
        for(int i = 0;i<fronts.size();i++)
        {
            if(no.count(fronts[i]) && no.count(backs[i]))
            {
                continue;
            }
            else if(no.count(fronts[i]))
            {
                result = min(result,backs[i]);
            }
            else if(no.count(backs[i]))
            {
                result = min(result,fronts[i]);
            }
            else
            {
                result = min(result,min(fronts[i],backs[i]));
            }
        }
        if(result == INT_MAX)
        {
            return 0;
        }
        return result;
        
        
    }
};