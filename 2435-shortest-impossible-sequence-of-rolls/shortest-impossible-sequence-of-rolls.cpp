class Solution {
public:
    int shortestSequence(vector<int>& rolls, int k) {
        int j = 0;
        vector<int> inp(k,0),out(k,0);
        int sum = 0;
        for(int i = 0;i<rolls.size();i++)
        {
            if(inp[rolls[i]-1] == 0)
            {
                inp[rolls[i]-1] = 1;
                sum++;
            }

            if(sum == k)
            {
                j++;
                inp = out;
                sum = 0;
            }
        }
        return j+1;
        
    }
};