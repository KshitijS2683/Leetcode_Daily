class Solution {
public:
    int minimumOperationsToMakeKPeriodic(string word, int k) {
        int part = word.size()/k;
        unordered_map<string,int> inp;
        string temp = {};
        int maxi = INT_MIN;
        for(int i = 0;i<word.size();i++)
        {
            if(i%k == 0)
            {
                inp[temp]++;
                maxi = max(maxi,inp[temp]);
                temp.clear();
            }
            temp.push_back(word[i]);
        }
        inp[temp]++;
        maxi = max(maxi,inp[temp]);
        return part-maxi;
        
    }
};