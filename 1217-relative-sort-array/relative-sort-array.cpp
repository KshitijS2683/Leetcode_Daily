class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> inp;
        vector<int> out;
        for(int i = 0;i<arr1.size();i++)
        {
            inp[arr1[i]]++;
        }
        for(int i = 0;i<arr2.size();i++)
        {
            int c = inp[arr2[i]]; 
            for(int j = 0;j<c;j++)
            {
                out.push_back(arr2[i]);
                inp[arr2[i]]--;
            }
        }
        vector<int> temp;
        for(auto &x : inp)
        {
            for(int i = 0;i<x.second;i++)
            {
                temp.push_back(x.first);
            }
        }
        sort(temp.begin(),temp.end());
        for(int i = 0;i<temp.size();i++)
        {
            out.push_back(temp[i]);
        }
        return out;
        
    }
};