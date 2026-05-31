class Solution {
public:
    int maximumSetSize(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1,s2,s;
        int n = nums1.size();
        for(int i = 0;i<n;i++)
        {
            s1.insert(nums1[i]);
            s.insert(nums1[i]);
            s2.insert(nums2[i]);
            s.insert(nums2[i]);
        }
        int left = min(n/2,(int)s1.size()) + min(n/2,(int)s2.size());
        return min((int)s.size(),left);
    }
};