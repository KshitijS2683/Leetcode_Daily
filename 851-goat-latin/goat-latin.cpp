class Solution {
public:
    string toGoatLatin(string sentence) {
        string output;
        stringstream ss(sentence);
        string word;
        int i =1;

        while(ss >> word)
        {
            string curr = "";
            if(word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u' || word[0] == 'A' || word[0] == 'E' || word[0] == 'I' || word[0] == 'O' || word[0] == 'U')
            {
                curr = word + "ma";
            }
            else
            {
                curr = word.substr(1,word.size()-1);
                curr.push_back(word[0]);
                curr += "ma";
            }
            curr += string(i, 'a');
            i++;
            if(!output.empty())
                output += ' ';
            output += curr;
        }
        return output;
        
    }
};