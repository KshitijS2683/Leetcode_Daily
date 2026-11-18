class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        vector<int> diff;
        int ans = 0;
        for(int i = 1;i<nums.size();i++)
        {
            diff.push_back(nums[i] - nums[i-1]);
        }
        int i = 1;
        while(i<diff.size())
        {
            int count = 0;
            // int curr = diff[i] - diff[i-1];
            if(diff[i] != diff[i-1])
            {
                i++;
                continue;
            }
            i++;
            count++;
            while(i<diff.size() && diff[i] == diff[i-1])
            {
                count++;
                i++;
            }
            ans += count * (count+1) * 0.5;
        }
        return ans;
    }
};