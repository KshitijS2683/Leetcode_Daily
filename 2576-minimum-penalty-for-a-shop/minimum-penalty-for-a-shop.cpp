class Solution {
public:
    int bestClosingTime(string customers) {
        int ys = 0,ns = 0;
        int min_penalty = INT_MAX;
        int out = 0;
        for(int i = 0;i<customers.size();i++)
        {
            if(customers[i] == 'Y')
            {
                ys++;
            }
            else
            {
                ns++;
            }
        }
        int penalty = ys;
        for(int i = 0;i<customers.size();i++)
        {
            if(penalty < min_penalty)
            {
                min_penalty = penalty;
                out = i;
            }
            if(customers[i] == 'Y')
            {
                penalty--;
            }
            else
            {
                penalty++;
            }
        }
        if(penalty < min_penalty)
        {
            min_penalty = penalty;
            out = customers.size();
        }
        return out;
        
    }
};