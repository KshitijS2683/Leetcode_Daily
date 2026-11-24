class Solution {
public:
    long long countVowels(string word) {
        long long vowel = 0;
        for(int i = 0;i<word.size();i++)
        {
            if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
            {
                vowel += 1LL * (i+1) * (word.size()-i);
            }
        }
        return vowel;
        
    }
};