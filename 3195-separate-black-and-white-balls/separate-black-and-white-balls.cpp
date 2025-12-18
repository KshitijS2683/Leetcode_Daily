class Solution {
public:
    long long minimumSteps(string s) {
        long long zeroes=0;
        for(long long i =0;i<s.size();i++)
        {
            if(s[i] == '0')
            {
                zeroes++;
            }
        }
        long long a =0,k=zeroes-1,count=0;
        for(long long i = zeroes-1;i>=0;i--)
        {
            if(s[i] == '1')
            {
                a += k-i;
                k--;
                count++;
            }
        }
        long long b = 0,p=zeroes;
        for(long long i = zeroes;i<s.size();i++)
        {
            if(s[i] == '0')
            {
                b+=i-p;
                p++;
            }
        }
        long long result = a + b + (count*count);
        return result;
        
    }
};