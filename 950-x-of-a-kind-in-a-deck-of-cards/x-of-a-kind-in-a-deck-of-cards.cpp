class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> inp;
        int check = 0;
        if(deck.size() < 2)
        {
            return false;
        }
        for(int i = 0;i<deck.size();i++)
        {
            inp[deck[i]]++;
        }
        for(auto &x : inp)
        {
            check = gcd(check,x.second);
        } 
        return check > 1;       
    }
};