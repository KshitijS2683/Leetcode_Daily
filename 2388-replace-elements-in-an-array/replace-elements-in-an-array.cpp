class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        unordered_map<int,int> inp;
        for(int i = 0;i<nums.size();i++)
        {
            inp[nums[i]] = i;
        }

        for(auto &x : operations)
        {
            int index = inp[x[0]];
            nums[index] = x[1];
            inp.erase(x[0]);
            inp[x[1]] = index;
        }
        return nums;
        
    }
};