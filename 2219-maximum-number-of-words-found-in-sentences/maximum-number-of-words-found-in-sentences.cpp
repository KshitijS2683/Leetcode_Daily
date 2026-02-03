class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int words = 0,max_words = INT_MIN;

        for(int i = 0;i<sentences.size();i++)
        {
            words = 0;
            for(int j = 0;j<sentences[i].size();j++)
            {
                if(sentences[i][j] == ' ')
                {
                    words++;
                }
            }
            max_words = max(max_words,words+1);
        }
        return max_words;
        
    }
};