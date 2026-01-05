class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        vector<pair<int,int>> inp;
        long long sum = 0,sum_cost = 0,prefix_sum=0,ans=0,min_ans = LONG_LONG_MAX,prefix_cost = 0;
        for(int i = 0;i<nums.size();i++)
        {
            inp.push_back({nums[i],cost[i]});
            sum += 1LL * nums[i] * cost[i];
            sum_cost += cost[i];
        }
        sort(inp.begin(),inp.end());
        for(auto &x : inp)
        {
            ans = sum - (1LL * sum_cost * x.first);
            ans += 2* 1LL * (prefix_cost*x.first - prefix_sum);
            prefix_cost += x.second;
            prefix_sum += 1LL * x.first*x.second;
            min_ans = min(ans,min_ans);
        }
        return min_ans;

        
    }
};