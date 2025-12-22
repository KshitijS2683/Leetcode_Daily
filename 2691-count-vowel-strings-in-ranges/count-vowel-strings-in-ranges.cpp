class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        unordered_set<char> input = {'a','e','i','o','u'};
        vector<int> inp;
        vector<int> out;
        for(int i = 0;i<words.size();i++)
        {
            if(input.count(words[i][0]) && input.count(words[i][words[i].size()-1]) )
            {
                inp.push_back(i);
            }
        }
        for(int i = 0;i<queries.size();i++)
        {
            int k = 0,j=inp.size()-1;
            while(k<inp.size() && queries[i][0] > inp[k])
            {
                k++;
            }
            while(j>=0 && queries[i][1] < inp[j])
            {
                j--;
            }
            out.push_back(j-k+1);
        }
        return out;



        
    }
};