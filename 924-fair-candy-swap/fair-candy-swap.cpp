class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA = 0,sumB = 0;
        sort(aliceSizes.begin() , aliceSizes.end());
        sort(bobSizes.begin() , bobSizes.end());
        for(int i = 0;i<aliceSizes.size();i++)
        {
            sumA +=aliceSizes[i];
        }
        for(int i = 0;i<bobSizes.size();i++)
        {
            sumB += bobSizes[i];
        }
        int diff = sumB - sumA;
        int i = 0,j = 0;
        while(i < aliceSizes.size() && j < bobSizes.size())
        {
            if(bobSizes[j] - aliceSizes[i] == diff/2)
            {
                return {aliceSizes[i] , bobSizes[j]};
            }
            else if(bobSizes[j] - aliceSizes[i] > diff/2)
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        return {};

        
    }
};