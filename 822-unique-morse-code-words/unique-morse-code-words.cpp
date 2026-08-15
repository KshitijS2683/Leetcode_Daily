class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> inp;
        vector<string> codes = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(int i = 0;i<words.size();i++)
        {
            string out = "";
            for(int j = 0;j<words[i].size();j++)
            {
                out += codes[words[i][j] - 'a'];
            }
            inp.insert(out);
        }
        return inp.size();
        
    }
};