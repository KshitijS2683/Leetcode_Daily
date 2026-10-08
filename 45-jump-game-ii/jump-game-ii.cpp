class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size() , INT_MAX);
        dp[0] = 0;
        for(int i = 0;i<nums.size();i++)
        {
            int j = 1;
            while(j<=nums[i] && (i+j)<nums.size())
            {
                dp[i+j] = min(dp[i]+1,dp[i+j]);
                j++;
            }
        }
        return dp[nums.size()-1];
        
    }
};