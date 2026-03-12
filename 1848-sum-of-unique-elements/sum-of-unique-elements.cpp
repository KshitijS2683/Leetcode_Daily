class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        unordered_map<int,int> inp;
        for(int i = 0;i<nums.size();i++)
        {
            inp[nums[i]]++;
        }
        for(auto &x : inp)
        {
            if(x.second == 1)
            {
                sum += x.first;
            }
        }
        return sum;
        
    }
};