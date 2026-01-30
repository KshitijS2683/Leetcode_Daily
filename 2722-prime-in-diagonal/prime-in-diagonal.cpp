class Solution {
public:
    bool isPrime(int n)
    {
        if(n == 1 || n == 0)
        {
            return false;
        }
        for(int i = 2;i<=sqrt(n);i++)
        {
            if(n%i == 0)
            {
                return false;
            }
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums[0].size();
        int max_prime = 0;
        for(int i = 0;i<nums.size();i++)
        {
            if(isPrime(nums[i][i]))
            {
                max_prime = max(max_prime,nums[i][i]);
            }
            if(isPrime(nums[i][n-i-1]))
            {
                max_prime = max(max_prime,nums[i][n-i-1]);
            }
        }
        return max_prime;
        
    }
};