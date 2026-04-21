class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int> inp;
        vector<int> out;
        if(nums.empty() || nums.size() == 1)
        {
            return nums;
        }
        sort(nums.begin(),nums.end());
        // inp.push_back(nums[0]);
        // for(int i = 1;i<nums.size();i++)
        // {
        //     if(nums[i] != inp.back())
        //     {
        //         inp.push_back(nums[i]);
        //     }
        // }
        inp = nums;
        for(int i = 0;i<inp.size();i++)
        {
            if(i == 0 )
            {
                if(inp[i+1] != (inp[i]+1) && inp[i+1] != inp[i])
                {
                    out.push_back(inp[i]);
                }

            }
            else if(i == inp.size()-1)
            {
                if(inp[i-1] != (inp[i]-1) && inp[i-1] != inp[i])
                {
                    out.push_back(inp[i]);
                }

            }
            else if(inp[i-1] != (inp[i]-1) && inp[i+1] != (inp[i]+1) && inp[i-1] != inp[i] && inp[i+1] != inp[i])
            {
                out.push_back(inp[i]);
            }
        }
        return out;
        
        
    }
};