class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single = 0,doub = 0;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i] > 9)
            {
                doub += nums[i];
            }
            else
            {
                single += nums[i];
            }
        }
        return single != doub;
        
    }
};