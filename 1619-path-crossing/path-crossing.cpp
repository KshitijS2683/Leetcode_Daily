class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>> inp;
        int x = 0,y =0;
        inp.insert({x,y});
        for(int i = 0;i<path.size();i++)
        {
            if(path[i] == 'N')
            {
                x++;
            }
            else if(path[i] == 'S')
            {
                x--;
            }
            else if(path[i] == 'E')
            {
                y++;
            }
            else
            {
                y--;
            }

            if(inp.count({x,y}) != 0)
            {
                return true;
            }
            inp.insert({x,y});
        }
        return false;
        
    }
};