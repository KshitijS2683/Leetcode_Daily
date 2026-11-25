class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int last = INT_MIN;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i] == 1 && last != INT_MIN && i-last <= k)
            {
                return false;
            }
            if(nums[i] == 1)
            {
                last = i;
            }
        }
        return true;
        
    }
};