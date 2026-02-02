class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size()<26)
        {
            return false;
        }
        sort(sentence.begin(),sentence.end());
        int k = 0;
        for(int i = 0;i<sentence.size();i++)
        {
            if(i!= 0 && sentence[i] == sentence[i-1])
            {
                continue;
            }
            else
            {
                if(sentence[i] - 'a' == k)
                {
                    k++;
                }
                else
                {
                    return false;
                }
            }
        }
        if(k == 26)
        {
            return true;
        }
        return false;
    }
};