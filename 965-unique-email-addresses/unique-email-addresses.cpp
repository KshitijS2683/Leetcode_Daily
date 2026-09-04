class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<pair<string,string>> inp;
        for(int i = 0;i<emails.size();i++)
        {
            string domain = "";
            string local = "";
            bool flag1 = false,flag2 = false;
            for(int j = 0;j<emails[i].size();j++)
            {
                if(emails[i][j] == '+')
                {
                    flag1 = true;
                }
                else if(emails[i][j] == '@')
                {
                    flag2 = true;
                }
                else if(!flag2 && emails[i][j] == '.')
                {
                    continue;
                }
                else if(!flag1 && !flag2)
                {
                    local.push_back(emails[i][j]);
                }
                else if(flag1 && !flag2)
                {
                    continue;
                }
                else if(flag2)
                {
                    domain.push_back(emails[i][j]);
                }
            }
            inp.insert({local,domain});
        }
        return inp.size();
    }
};