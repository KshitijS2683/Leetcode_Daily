class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = 0;
        vector<vector<int>> out;
        unordered_map<int,int> inp;
        for(int i = 0;i<nums.size();i++)
        {
            inp[nums[i]]++;
        }
        for(auto &x : inp)
        {
            n = max(n,x.second);
        }
        for(int i = 0;i<n;i++)
        {
            vector<int> temp;
            for(auto &x : inp)
            {
                if(x.second)
                {
                    temp.push_back(x.first);
                    x.second--;
                }
            }
            out.push_back(temp);
        }
        return out;
        
    }
};