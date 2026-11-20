class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        if(n < 1)
        {
            return ans;
        }
        if(n%2 != 0)
        {
            ans.push_back(0);
            n--;
        }
        int k = 1;
        for(int i = 0;i < n/2;i++)
        {
            ans.push_back(k);
            ans.push_back(-1 * k);
            k++;
        }
        return ans;
        
    }
};