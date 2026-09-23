class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> inp;
        for(int i = 0;i<stones.size();i++)
        {
            inp.push(stones[i]);
        }
        while(inp.size() > 1)
        {
            int a = inp.top();
            inp.pop();
            int b = inp.top();
            inp.pop();
            if(a==b)
            {
                continue;
            }
            else
            {
                inp.push(abs(a-b));
            }
        }
        if(inp.size() == 0)
        {
            return 0;
        }
        return inp.top();
        
    }
};