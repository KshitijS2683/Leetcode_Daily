class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int ans = 0,sum=0;
        int left,right;
        if(destination > start)
        {
            left = start;
            right = destination;
        }
        else if(destination < start)
        {
            right = start;
            left = destination;
        }
        else
        {
            return 0;
        }
        for(int i = left;i<right;i++)
        {
            ans += distance[i];
        }
        for(int i = 0;i<distance.size();i++)
        {
            sum += distance[i];
        }
        return min(ans,sum-ans);
        
    }
};