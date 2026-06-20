class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0,tens=0,twenty=0;
        for(int i = 0;i<bills.size();i++)
        {
            int change = bills[i]-5;
            if(change == 0)
            {
            }
            else if(change == 5)
            {
                five--;
                if(five<0)
                {
                    return false;
                }
            }
            else
            {
                if(tens > 0)
                {
                    tens--;
                    five--;
                    if(five<0)
                    {
                        return false;
                    }
                }
                else
                {
                    five -= 3;
                    if(five<0)
                    {
                        return false;
                    }
                }
            }
            if(bills[i] == 5)
            {
                five++;
            }
            else if(bills[i] == 10)
            {
                tens++;
            }
            else
            {
                twenty++;
            }
        }
        return true;
        
    }
};