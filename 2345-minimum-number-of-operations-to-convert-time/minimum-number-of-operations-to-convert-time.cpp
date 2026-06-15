class Solution {
public:
    int convertTime(string current, string correct) {
        int curhour = (current[0]-'0')*10 + (current[1] - '0');
        int corhour = (correct[0]-'0')*10 + (correct[1] - '0');
        int curmin = (current[3]-'0')*10 + (current[4] - '0');
        int cormin = (correct[3]-'0')*10 + (correct[4] - '0');

        int timediff = (corhour*60 + cormin) - (curhour*60 + curmin);
        int count = 0;

        count += timediff/60;
        timediff %= 60;

        count += timediff/15;
        timediff %= 15;

        count += timediff/5;
        timediff %= 5;

        count += timediff;

        return count;
    }
};