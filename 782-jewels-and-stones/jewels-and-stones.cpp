class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        unordered_map<int,int> inp;
        for(int i = 0;i<jewels.size();i++)
        {
            inp[jewels[i]] = 1;
        }
        for(int i = 0;i<stones.size();i++)
        {
            if(inp[stones[i]] == 1)
            {
                count++;
            }
        }
        return count;
    }
};