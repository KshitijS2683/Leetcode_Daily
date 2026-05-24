class Solution {
public:
    int findValidSplit(vector<int>& nums) {
        unordered_map<int,int> total, left;
        int out = -1;

        for(int i = 0; i < nums.size(); i++)
        {
            int a = nums[i];

            for(int k = 2; k * k <= a; k++)
            {
                if(a % k == 0)
                {
                    while(a % k == 0)
                    {
                        total[k]++;
                        a = a / k;
                    }
                }
            }

            if(a > 1)
            {
                total[a]++;
            }
        }

        for(int i = 0; i < nums.size() - 1; i++)
        {
            int a = nums[i];

            for(int k = 2; k * k <= a; k++)
            {
                if(a % k == 0)
                {
                    while(a % k == 0)
                    {
                        left[k]++;
                        total[k]--;
                        a = a / k;
                    }
                }
            }

            if(a > 1)
            {
                left[a]++;
                total[a]--;
            }

            bool flag = true;

            for(auto &x : left)
            {
                if(total[x.first] > 0)
                {
                    flag = false;
                    break;
                }
            }

            if(flag)
            {
                out = i;
                break;
            }
        }

        return out;
    }
};