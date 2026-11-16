class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<long long> dp(target+1,0);
        dp[0] = 1;
        sort(nums.begin(),nums.end());
        for(int i = 1;i<= target;i++)
        {
            for(int j = 0;j<nums.size() && (i-nums[j]) >= 0;j++)
            {
                dp[i] = static_cast<int>(min<long long>(INT_MAX, 1LL * dp[i] + dp[i - nums[j]]));
            }
        }
        return dp[target];
        
    }
};