class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        long long curr = 0;
        long long min_removed = LONG_LONG_MAX;
        long long sum = 0;
        sort(beans.begin(),beans.end());
        for(int i = 0;i<beans.size();i++)
        {
            sum += beans[i];
        }
        for(int i = 0;i<beans.size();i++)
        {
            long long a = sum - (beans[i] * (beans.size()-i));
            min_removed = min(min_removed,curr+a);
            curr += beans[i];
            sum -= beans[i];
        }
        return min_removed;
        
    }
};