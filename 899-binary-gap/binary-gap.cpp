class Solution {
public:
    string binary(int n)
    {
        string out;
        while(n !=0)
        {
            out.push_back(n%2);
            n /= 2;
        }
        return out;
    }
    int binaryGap(int n) {
        string inp = binary(n);
        int last_1_index = -1;
        int max_dist = INT_MIN;
        for(int i = 0;i<inp.size();i++)
        {
            if(inp[i] == 1)
            {
                if(last_1_index != -1)
                {
                    max_dist = max(max_dist,i-last_1_index);
                    
                }
                last_1_index = i;
            }
        }
        
        return max_dist == INT_MIN ? 0 : max_dist;
        
    }
};