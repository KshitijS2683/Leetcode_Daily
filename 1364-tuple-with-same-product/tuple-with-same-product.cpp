class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,set<pair<int,int>>> inp;
        for(int i = 0;i<nums.size();i++)
        {
            for(int j = i+1;j<nums.size();j++)
            {
                inp[nums[i]*nums[j]].insert({nums[i],nums[j]});
            }
        }
        int count = 0;
        for(auto &x : inp)
        {
            int y = x.second.size();
            count += y*(y-1)/2;
        }
        return count*8;
        
    }
};