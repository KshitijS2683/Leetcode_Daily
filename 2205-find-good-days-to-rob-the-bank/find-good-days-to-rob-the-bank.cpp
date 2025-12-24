class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time) {
        int n = security.size();
        vector<int> ans;

        if(time == 0){
            for(int i = 0; i < n; i++) ans.push_back(i);
            return ans;
        }

        if(n < 2*time + 1) return ans;

        // nonInc[i] = number of previous consecutive non-increasing days ending at i
        // nonDec[i] = number of following consecutive non-decreasing days starting at i
        vector<int> nonInc(n, 0), nonDec(n, 0);

        // build non-increasing prefix counts
        for(int i = 1; i < n; i++){
            if(security[i] <= security[i-1])
                nonInc[i] = nonInc[i-1] + 1;
        }

        // build non-decreasing suffix counts
        for(int i = n-2; i >= 0; i--){
            if(security[i] <= security[i+1])
                nonDec[i] = nonDec[i+1] + 1;
        }

        // valid centers
        for(int i = time; i < n - time; i++){
            if(nonInc[i] >= time && nonDec[i] >= time)
                ans.push_back(i);
        }

        return ans;
    }
};
