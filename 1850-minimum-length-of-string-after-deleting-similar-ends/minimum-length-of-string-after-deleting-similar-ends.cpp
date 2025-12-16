class Solution {
public:
    int minimumLength(string s) {
        while(s.length() > 1)
        {
            int i = 0;
            int j = s.length()-1;
            while(i<s.length()-1 && s[i] == s[i+1])
            {
                i++;
            }
            while(j>0 && s[j] == s[j-1])
            {
                j--;
            }
            if(i>=j)
            {
                return 0;
            }
            if(s[i] != s[j])
            {
                break;
            }
            s.erase(0,i+1);
            s.erase(j-(i+1),s.length()-(j-(i+1)));
        }
        return s.length();
        
    }
};