class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int sum = 0;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i] < 0 && k > 0)
            {
                nums[i] = -nums[i];
                k--;
            }
            sum += nums[i];
        }

        if(k%2 != 0)
        {
            sort(nums.begin(),nums.end());
            sum -= 2*nums[0];
        }
        return sum;
    }
};