class Solution {
public:
    string binary(int a)
    {
        string out;
        while(a != 0)
        {
            out.push_back((a%2)+'0');
            a /= 2;
        }
        return out;
    }
    int hammingDistance(int x, int y) {
        string a,b;
        a = binary(x);
        b = binary(y);
        if(a.size() > b.size())
        {
            while(b.size()!=a.size())
            {
                b.push_back('0');
            }
        }
        else if(a.size() < b.size())
        {
            while(b.size()!=a.size())
            {
                a.push_back('0');
            }
        }
        int out = 0;
        for(int i = 0;i<a.size();i++)
        {
            if(a[i] != b[i])
            {
                out++;
            }
        }
        return out;
        
    }
};