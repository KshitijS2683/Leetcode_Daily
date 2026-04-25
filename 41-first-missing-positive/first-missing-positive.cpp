class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0;
        int k =1;
        while(i<nums.size())
        {
            if(nums[i] < k)
            {
                i++;
            }
            else if(nums[i] == k)
            {
                k++;
                i++;
            }
            else
            {
                return k;
            }
        }
        return k;
    }
};