class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int count = 0;
        vector<char> out;
        while(i<chars.size())
        {
            int j = i;
            while(j<chars.size()-1 && chars[j] == chars[j+1])
            {
                j++;
            }
            if(j==i)
            {
                count++;
                out.push_back(chars[j]);
            }
            else
            {
                count++;
                out.push_back(chars[j]);
                if(j-i+1 >= 10)
                {
                    int a = j-i+1;
                    string s = to_string(a);
                    for(char c : s)
                    {
                        out.push_back(c);
                        count++;
                    }
                }
                else
                {
                    out.push_back(j-i+1 + '0');
                    count++;
                }
            }
            i = j+1;
        }
        chars = out;
        return count;
        
    }
};