class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int a = nums[nums.size()-1];
        long long out = ((a+k-1)*(a+k)/2) - (a*(a-1)/2) ;
        return (int)out;
    }
};