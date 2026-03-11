class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> inp;
        vector<int> out;
        for(int i = 0;i<nums.size();i++)
        {
            inp[nums[i]]++;
        }
        for(auto &x : inp)
        {
            if(x.second == 2)
            {
                out.push_back(x.first);
            }
        }
        return out;
        
    }
};