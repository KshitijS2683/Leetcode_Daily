class Solution {
public:
    int minTimeToType(string word) {
        char curr = 'a';
        int count = 0;
        for(int i = 0;i<word.size();i++)
        {
            int move;
            if(word[i] > curr)
            {
                move = word[i] - curr;
            }
            else
            {
                move = curr - word[i];
            }
            curr = word[i];
            count += min(move,26-move);
            count++;
        }
        return count;
        
    }
};