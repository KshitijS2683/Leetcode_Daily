class Solution {
public:
    int stringtointdate(string s)
    {
        vector<int> arr = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int month = (s[0] - '0') * 10  + (s[1] - '0');
        int day =   (s[3] - '0') * 10  + (s[4] - '0');
        int ans = 0;
        for(int i = 0;i<month-1;i++)
        {
            ans += arr[i];
        }
        return ans+day;

    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int startalice = 0 , endalice = 0 , startbob = 0 , endbob = 0;
        startalice = stringtointdate(arriveAlice);
        endalice = stringtointdate(leaveAlice);
        startbob = stringtointdate(arriveBob);
        endbob = stringtointdate(leaveBob);

        int ans = min(endalice,endbob) - max(startalice,startbob) + 1;
        ans = ans >= 0?ans:0;

        return ans;

        
    }
};