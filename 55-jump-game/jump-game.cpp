class Solution {
public:
    bool canJump(vector<int>& nums) {
        vector<bool> dp(nums.size(),false);
        dp[0] = true;
        for(int i = 0;i<nums.size();i++)
        {
            if(dp[i] == false)
            {
                continue;
            }
            else
            {
                int j = 1;
                while(j <= nums[i] && i + j < nums.size() )
                {
                    dp[i+j] = true;
                    j++;
                }
            }
        }
        return dp[nums.size()-1];
        
    }
};