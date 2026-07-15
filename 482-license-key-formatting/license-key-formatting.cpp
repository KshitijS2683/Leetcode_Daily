class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int curr = 0;
        string si;
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] != '-')
            {
                curr++;
                si.push_back(toupper(s[i]));
            }
        }
        int rem = curr%k;
        int out = curr/k;
        int p = 0;
        string output;
        if(rem != 0)
        {
            for(int i =0;i<rem;i++)
            {
                output.push_back(si[p++]);
            }
            if(si.size()>k)
            {
                output.push_back('-');
            }
        }
        int c = 0;
        for(int i = p;i<si.size();i++)
        {
            if(c != 0 && c%k == 0)
            {
                output.push_back('-');
                c = 0;
            }
            output.push_back(si[p++]);
            c++;
        }
        return output;


        
    }
};