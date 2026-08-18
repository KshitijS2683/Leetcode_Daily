class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        for (char& c : paragraph) {
            if (!isalpha(static_cast<unsigned char>(c))) {
                c = ' ';
            }
        }

        stringstream ss(paragraph);
        string word;
        unordered_map<string,int> para,ban;
        for(int i = 0;i<banned.size();i++)
        {
            ban[banned[i]]++;
        }
        int ans = 0;
        string result;
        while(ss >> word)
        {
            transform(word.begin(), word.end(), word.begin(), [](unsigned char c) {
        return std::tolower(c);
    });
            para[word]++;
            if(ban[word] == 0 && para[word] > ans)
            {
                result = word;
                ans = para[word];
            }
        }
        return result;
        
    }
};