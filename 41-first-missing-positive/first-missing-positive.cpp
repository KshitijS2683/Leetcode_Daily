class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int i = 0;
        // int k =1;
        // while(i<nums.size())
        // {
        //     if(nums[i] < k)
        //     {
        //         i++;
        //     }
        //     else if(nums[i] == k)
        //     {
        //         k++;
        //         i++;
        //     }
        //     else
        //     {
        //         return k;
        //     }
        // }
        // return k;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            while (nums[i] >= 1 && nums[i] <= n && 
                   nums[nums[i] - 1] != nums[i]) {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }

        return n + 1;
    }
};