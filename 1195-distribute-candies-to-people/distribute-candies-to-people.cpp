class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> out(num_people,0);
        int i = 1;
        int j = 0;
        while(candies > 0)
        {
            if(candies >= i)
            {
                out[j] += i;
                candies -= i;
            }
            else
            {
                out[j] += candies;
                candies = 0;
            }
            i++;
            j += 1;
            j = j%num_people;

        }
        return out;
        
    }
};