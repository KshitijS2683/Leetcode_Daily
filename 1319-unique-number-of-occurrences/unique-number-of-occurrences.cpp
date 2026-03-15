class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> inp;
        for(int i = 0;i<arr.size();i++)
        {
            inp[arr[i]]++;
        }
        vector<int> a;
        for(auto &x : inp)
        {
            a.push_back(x.second);
        }
        sort(a.begin(),a.end());
        for(int i = 1;i<a.size();i++)
        {
            if(a[i] == a[i-1])
            {
                return false;
            }
        }
        return true;
    }
};