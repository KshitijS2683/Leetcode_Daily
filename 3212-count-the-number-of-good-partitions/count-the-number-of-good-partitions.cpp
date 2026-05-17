class Solution {
public:
     static const int MOD = 1e9 + 7;

    long long modPow(long long a, long long b) {
        long long res = 1;
        while (b > 0) {
            if (b & 1) res = (res * a) % MOD;
            a = (a * a) % MOD;
            b >>= 1;
        }
        return res;
    }
    int numberOfGoodPartitions(vector<int>& nums) {
        unordered_map<int,vector<int>> inp;
        vector<int> temp(nums.size(),0);
        for(int i = 0;i<nums.size();i++)
        {
            inp[nums[i]].push_back(i);
        }
        int mini = 0;
        for(auto &x : inp)
        {
            if(x.second.size() >= 2)
            {
                // mini = min(mini,(int)nums.size()-(x.second.back()-x.second.front()));
                temp[x.second.front()] += 1;
                temp[x.second.back()] -= 1;
            }
        }
        int cur = 0;
        for(int i = 0;i<temp.size();i++)
        {
            cur += temp[i];
            if(!cur)
            {
                mini++;
            }
        }
        return modPow(2, mini - 1);
        
    }
};