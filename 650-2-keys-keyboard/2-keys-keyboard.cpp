class Solution {
public:
    int minSteps(int n) {
        if(n == 1)
        {
            return 0;
        }
        int ans = 0;
        int factor = 2;
        while(n > 1)
        {
            while(n%factor == 0)
            {
                ans += factor;
                n /= factor;
            }
            factor++;
        }
        return ans;
        
    }
};