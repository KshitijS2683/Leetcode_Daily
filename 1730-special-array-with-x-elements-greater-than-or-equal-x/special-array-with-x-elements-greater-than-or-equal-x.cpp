class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k = nums.size();
        int a = 0;
        int i = 0;
        while(a <= k-i)
        {
            while(i<k && nums[i] < a)
            {
                i++;
            }
            if(a == k-i)
            {
                return a;
            }
            a++;
        }
        return -1;
        // for(int i = 0;i>0;i--)
        // {
        //     k++;
        //     if(nums[i-1] == k)
        //     {
        //         return 
        //     }
        // }
        
    }
};