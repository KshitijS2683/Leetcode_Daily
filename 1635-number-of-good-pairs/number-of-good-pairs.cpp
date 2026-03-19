class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> inp;
        for(int i = 0;i<nums.size();i++)
        {
            inp[nums[i]]++;
        }
        int count = 0;
        for(auto &x : inp)
        {
            if(x.second > 1)
            {
                count += (x.second)*(x.second - 1)/2;
            }
        }
        return count;
    }
};