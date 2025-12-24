class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();

        vector<long long> prefixsum(n, 0), postfixsum(n, 0);
        vector<int> res(n);

        for(int i = 1; i < n; i++){
            prefixsum[i] = prefixsum[i-1] + nums[i-1];
        }
        
        for(int i = n-2; i >= 0; i--){
            postfixsum[i] = postfixsum[i+1] + nums[i+1];
        }

        for(int i = 0; i < n; i++){
            long long left = std::llabs(prefixsum[i] - 1LL * nums[i] * i);
            long long right = std::llabs(1LL * nums[i] * (n - i - 1) - postfixsum[i]);
            res[i] = left + right;
        }

        return res;
    }
};
