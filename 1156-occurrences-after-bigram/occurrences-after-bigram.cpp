class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        stringstream ss(text);
        string word;
        vector<string> out;
        bool checkfirst = false;
        bool checksecond = false;
        while(ss >> word)
        {
            if(checkfirst && checksecond)
            {
                out.push_back(word);
                checkfirst = false;
                if(first == second)
                {
                    checkfirst = true;
                }
                checksecond = false;
            }
            if(checkfirst && word != second)
            {
                checkfirst = false;
            }
            if(!checkfirst && word == first)
            {
                checkfirst = true;
            }
            else if(checkfirst && word == second)
            {
                checksecond = true;
            }
            
        }
        return out;
        
    }
};