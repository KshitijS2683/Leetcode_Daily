class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        unordered_map<int,int> inp;
        vector<int> out;
        int ind = 1;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i] == x)
            {
                inp[ind++] = i;
            }
        }
        for(int i = 0;i<queries.size();i++)
        {
            if(queries[i] >= ind)
            {
                out.push_back(-1);
            }
            else
            {
                out.push_back(inp[queries[i]]);
            }
        }
        return out;

    }
};