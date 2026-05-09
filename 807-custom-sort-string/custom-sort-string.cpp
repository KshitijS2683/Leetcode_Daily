class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> ord,ss,com,temp;
        string out;
        for(int i = 0;i<order.size();i++)
        {
            ord[order[i]]++;
        }
        for(int i = 0;i<s.size();i++)
        {
            ss[s[i]]++;
        }
        for(auto &x : ord)
        {
            if(ss[x.first]>0)
            {
                com[x.first] = ss[x.first];
            }
        }
        temp = com;
        for(int i = 0;i<order.size();i++)
        {
            while(com[order[i]]>0)
            {
                out.push_back(order[i]);
                com[order[i]]--;
            }
        }
        for(int i = 0;i<s.size();i++)
        {
            if(temp[s[i]] > 0)
            {
                temp[s[i]]--;
            }
            else
            {
                out.push_back(s[i]);
            }
        }
        return out;

        
    }
};