class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i = 0,j = 0;
        int count = 0;
        for(int i = 0;i<g.size();i++)
        {
            while(j<s.size() && s[j]<g[i])
            {
                j++;
            }
            if(j == s.size())
            {
                break;
            }
            if(s[j] >= g[i])
            {
                j++;
                count++;
            }
            else
            {
                break;
            }
        }
        return count;
        
    }
};