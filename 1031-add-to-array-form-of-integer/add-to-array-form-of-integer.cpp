class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry = k;
        for(int i = num.size()-1;i>=0;i--)
        {
            int temp = (num[i] + carry)/10;
            num[i] = (num[i] + carry)%10;
            carry = temp;
        }
        if(carry > 0)
        {
            vector<int> temp;
            while(carry > 0)
            {
                temp.push_back(carry%10);
                carry /= 10;
            }
            reverse(temp.begin(),temp.end());
            for(int i = 0;i<num.size();i++)
            {
                temp.push_back(num[i]);
            }
            num = temp;
        }
        return num;
        
    }
};