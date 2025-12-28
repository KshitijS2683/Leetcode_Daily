class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        vector<int> leftproduct;
        vector<int> rightproduct;
        vector<int> out;
        for(int i = 0;i<nums.size();i++)
        {
            leftproduct.push_back(product);
            product *= nums[i];
        }
        product = 1;
        for(int i = nums.size()-1;i>=0;i--)
        {
            rightproduct.push_back(product);
            product *= nums[i];
        }
        reverse(rightproduct.begin(),rightproduct.end());
        for(int i = 0;i<nums.size();i++)
        {
            out.push_back(leftproduct[i] * rightproduct[i]);
        }
        return out;


        
    }
};