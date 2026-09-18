class Solution {
public:
    string binary(int n)
    {
        if(n == 0)
        {
            return "0";
        }
        string out;
        while(n > 0)
        {
            out.push_back(n%2 + '0');
            n /= 2;
        }
        reverse(out.begin(),out.end());
        return out;
    }
    int bitwiseComplement(int n) {
        string b = binary(n);
        for(int i = 0;i<b.size();i++)
        {
            if(b[i] == '0')
            {
                b[i] = '1';
            }
            else
            {
                b[i] = '0';
            }
        }
        int out = 0;
        for(int i = 0;i<b.size();i++)
        {
            int c = b[i] - '0';
            out = out*2 + c;
        }
        return out;
    }
};