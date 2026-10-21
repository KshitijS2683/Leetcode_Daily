class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        if(arr.size() == 1)
        {
            return arr[0];
        }
        int qtr = arr.size()/4;
        int cnt = 1;
        int p = arr[0];
        for(int i = 1;i<arr.size();i++)
        {
            if(arr[i] == p)
            {
                cnt++;
            }
            else
            {
                cnt = 1;
            }
            p = arr[i];
            if(cnt > qtr)
            {
                return p;
            }
        }
        return -1;
    }
};