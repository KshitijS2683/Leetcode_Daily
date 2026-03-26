class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        bool flag = false;
        int xors = 0;
        for(int i = 1;i<nums.size();i++)
        {
            if(nums[i] == nums[i-1])
            {
                flag = true;
                xors ^= nums[i];
            }
        }
        if(!flag)
        {
            return 0;
        }
        return xors;
        
    }
};