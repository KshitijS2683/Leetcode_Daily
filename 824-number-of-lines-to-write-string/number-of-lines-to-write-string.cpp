class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int> result(2,0);
        for(int i = 0;i<s.size();i++)
        {
            int width = widths[s[i]-'a'];
            if(result[1] + width > 100)
            {
                result[0]++;
                result[1] = width;
            }
            else if(result[1] + width == 100)
            {
                result[0]++;
                result[1] = 0;

            }
            else
            {
                result[1] += width;
            }
        }
        if(result[1] > 0)
        {
            result[0]++;
        }
        if(result[1] == 0)
        {
            result[1] = 100;
        }
        return result;
        
    }
};