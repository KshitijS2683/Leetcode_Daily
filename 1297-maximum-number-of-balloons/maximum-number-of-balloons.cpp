class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> inp;
        for(int i = 0;i<text.size();i++)
        {
            inp[text[i]]++;
        }
        int ans = INT_MAX;
        ans = min(ans,inp['b']);
        ans = min(ans,inp['a']);
        ans = min(ans,inp['l']/2);
        ans = min(ans,inp['o']/2);
        ans = min(ans,inp['n']);
        return ans;
    }
};