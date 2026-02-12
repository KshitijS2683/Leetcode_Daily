class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        
        set<pair<int,int>> st;
        for(auto &q : queens)
            st.insert({q[0], q[1]});
        
        vector<vector<int>> result;
        
        // 8 directions
        vector<pair<int,int>> directions = {
            {1,0}, {-1,0}, {0,1}, {0,-1},
            {1,1}, {1,-1}, {-1,1}, {-1,-1}
        };
        
        for(auto dir : directions)
        {
            int x = king[0];
            int y = king[1];
            
            while(true)
            {
                x += dir.first;
                y += dir.second;
                
                if(x < 0 || x >= 8 || y < 0 || y >= 8)
                    break;
                
                if(st.count({x,y}))
                {
                    result.push_back({x,y});
                    break;  // stop in this direction
                }
            }
        }
        
        return result;
    }
};
