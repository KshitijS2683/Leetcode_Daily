class Solution {
public:
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        unordered_map<string,int> exact,lower,vowel;
        vector<string> out;
        for(int i = 0;i<wordlist.size();i++)
        {
            string temp = wordlist[i];
            string temp1 = wordlist[i];
            exact[wordlist[i]] = i;
            for(int i = 0;i<temp.size();i++)
            {
                temp[i] = tolower(temp[i]);
                temp1[i] = tolower(temp1[i]);
                if(temp[i] == 'a' || temp[i] == 'e' || temp[i] == 'i' || temp[i] == 'o' || temp[i] == 'u')
                {
                    temp[i] = '0';
                }
            }
            if(lower.find(temp1) == lower.end()) lower[temp1] = i;
            if(vowel.find(temp) == vowel.end()) vowel[temp] = i;
        }
        for(int i = 0;i<queries.size();i++)
        {
            string temp = queries[i];
            string temp1 = queries[i];
            if(exact.find(queries[i]) != exact.end())
            {
                out.push_back(wordlist[exact[queries[i]]]);
                continue;
            }
            for(int i = 0;i<temp.size();i++)
            {
                temp[i] = tolower(temp[i]);
                temp1[i] = tolower(temp1[i]);
                if(temp[i] == 'a' || temp[i] == 'e' || temp[i] == 'i' || temp[i] == 'o' || temp[i] == 'u')
                {
                    temp[i] = '0';
                }
            }
            if(lower.find(temp1) != lower.end())
            {
                out.push_back(wordlist[lower[temp1]]);
            }
            else if(vowel.find(temp) != vowel.end())
            {
                out.push_back(wordlist[vowel[temp]]);
            }
            else
            {
                out.push_back("");
            }

        }
        return out;
        
    }
};