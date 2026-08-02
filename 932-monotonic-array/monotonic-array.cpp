class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> asc = nums,desc = nums;
        sort(asc.begin(),asc.end());
        sort(desc.begin(),desc.end(),greater<int>());
        return asc == nums || desc == nums;
    }
};