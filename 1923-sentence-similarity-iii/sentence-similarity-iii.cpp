class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) {
        vector<string> a, b;

        stringstream ss1(s1), ss2(s2);
        string word;

        while (ss1 >> word) a.push_back(word);
        while (ss2 >> word) b.push_back(word);

        if (a.size() > b.size())
            return areSentencesSimilar(s2, s1);

        int i = 0;
        while (i < a.size() && a[i] == b[i]) i++;

        int j = a.size() - 1, k = b.size() - 1;
        while (j >= i && a[j] == b[k]) {
            j--;
            k--;
        }

        return j < i;
    }
};
