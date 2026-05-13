class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> inp;
        for(int i = 0;i<knowledge.size();i++)
        {
            inp[knowledge[i][0]] = knowledge[i][1];
        }
        string out;
        bool flag = true;
        string temp = {};
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] == '(')
            {
                flag = false;
            }
            else if(s[i] == ')')
            {
                flag = true;
                if(inp.find(temp) == inp.end())
                {
                    out.push_back('?');
                }
                else
                {
                    out += inp[temp];
                }
                temp.clear();
            }
            else if(!flag)
            {
                temp.push_back(s[i]);
            }
            else if(flag)
            {
                out.push_back(s[i]);
            }
        }
        return out;
        
    }
};