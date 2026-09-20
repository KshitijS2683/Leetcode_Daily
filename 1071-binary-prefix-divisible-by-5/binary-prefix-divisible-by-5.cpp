class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;
        int res = 0;
        for(int i = 0;i<nums.size();i++)
        {
            res = res*2 + nums[i];
            res = res%5;
            if(res == 0)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }
        return ans;
        
    }
};