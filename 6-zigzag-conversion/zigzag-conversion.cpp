class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= (int)s.size()) return s;
        string out;
        int j = 0;
        int start = (numRows-1)*2;
        while(j < numRows)
        {
            int i = j,k = start - ((j)*2);
            while(i<s.size())
            {
                out.push_back(s[i]);
                i = i+k;
                if(i<s.size() && start != k && k != 0)
                {
                    out.push_back(s[i]);
                }
                i += start-k;
            }
            j++;
        }
        return out;
        
    }
};