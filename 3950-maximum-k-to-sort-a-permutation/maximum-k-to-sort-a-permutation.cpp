class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int ans = -1;  // All bits set initially.

        vector<int> arr = nums;
        sort(nums.begin(), nums.end());

        if (arr == nums) {
            return 0;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (arr[i] != nums[i]) {
                ans = ans & arr[i] & nums[i];
            }
        }

        return ans;
    }
};