class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int a = *min_element(nums1.begin(),nums1.end());
        int b = *min_element(nums2.begin(),nums2.end());
        int common = INT_MAX;
        for(int i = 0;i<nums1.size();i++)
        {
            for(int j = 0;j<nums2.size();j++)
            {
                if(nums1[i] == nums2[j])
                {
                    common = min(common,nums1[i]);
                }
            }
        }
        if(common != INT_MAX)
        {
            return min(common,min(a,b) * 10 + max(a,b));

        }
        return min(a,b) * 10 + max(a,b);
        
    }
};