class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<pair<int,int>> start,end;
        for(int i = 0;i<trips.size();i++)
        {
            start.push_back({trips[i][1],trips[i][0]});
            end.push_back({trips[i][2],trips[i][0]});
        }
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        int k  = 0,cur=0;
        for(int i = 0;i<start.size();i++)
        {
            while(k<end.size() && end[k].first <= start[i].first)
            {
                cur -= end[k].second;
                k++;
            }
            if(cur + start[i].second > capacity)
            {
                return false;
            }
            cur += start[i].second;
        }
        return true;

        
    }
};