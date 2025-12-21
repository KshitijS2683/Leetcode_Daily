class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftsum,rightsum,out;
        int sum = 0;
        for(int i =0;i<nums.size();i++)
        {
            leftsum.push_back(sum);
            sum += nums[i];
        }
        sum = 0;
        for(int i =nums.size()-1;i>=0;i--)
        {
            rightsum.push_back(sum);
            sum += nums[i];
        }
        reverse(rightsum.begin(),rightsum.end());
        for(int i = 0;i<nums.size();i++)
        {
            out.push_back(abs(leftsum[i]-rightsum[i]));
        }
        return out;
        
    }
};