class Solution {
public:
    int xorOperation(int n, int start) {
        int out = start;
        for(int i = 1;i<n;i++)
        {
            out = out^(start + 2*i);
        }
        return out;
        
    }
};