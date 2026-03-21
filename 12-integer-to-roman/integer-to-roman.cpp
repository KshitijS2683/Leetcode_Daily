class Solution {
public:
    string intToRoman(int num) {
        string out;
        vector<char> inp = {'I','V','X','L','C','D','M'};
        int k = 0;
        while(k < inp.size())
        {
            if(num%10 != 0)
            {
                int a = num%10;
                if(a == 9)
                {
                    out.push_back(inp[k+2]);
                    out.push_back(inp[k]);
                }
                else if(a>5)
                {
                    while(a>5)
                    {
                        out.push_back(inp[k]);
                        a--;
                    }
                    out.push_back(inp[k+1]);
                }
                else if(a == 5)
                {
                    out.push_back(inp[k+1]);
                }
                else if(a==4)
                {
                    out.push_back(inp[k+1]);
                    out.push_back(inp[k]);
                }
                else
                {
                    while(a>0)
                    {
                        out.push_back(inp[k]);
                        a--;
                    }
                }
            }
            num = num/10;
            k += 2;
        }
        while(num>0)
        {
            out.push_back('M');
        }
        reverse(out.begin(),out.end());
        return out;

        
    }
};