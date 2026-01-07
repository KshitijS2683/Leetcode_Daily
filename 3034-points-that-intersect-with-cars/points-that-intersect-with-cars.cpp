class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        // set<int> inp;
        // int k =0;
        // sort(nums.begin(),nums.end());
        // for(int i = 0;i<nums.size();i++)
        // {
        //     k = max(nums[0],k);
        //     while(k<=nums[1])
        //     {
        //         inp.insert(k);
        //     }
        // }
        sort(nums.begin(),nums.end());
        int max_end = nums[0][1];
        int count = 0;
        for(int i = 1;i<nums.size();i++)
        {
            if(nums[i][0] > max_end)
            {
                count += (nums[i][0] - max_end - 1);
            }
            max_end = max(nums[i][1],max_end);
        }
        return max_end - nums[0][0] - count + 1;

        
    }
};