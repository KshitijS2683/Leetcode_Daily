class Solution {
public:
    int numSpecialEquivGroups(vector<string>& words) {
        set<vector<string>> inp;
        for(int i = 0;i<words.size();i++)
        {
            string odd,even;
            for(int j = 0;j<words[i].size();j++)
            {
                if(j%2 == 0)
                {
                    even.push_back(words[i][j]);
                }
                else
                {
                    odd.push_back(words[i][j]);
                }
            }
            sort(odd.begin(),odd.end());
            sort(even.begin(),even.end());
            inp.insert({odd,even});
        }
        return inp.size();
    }
};