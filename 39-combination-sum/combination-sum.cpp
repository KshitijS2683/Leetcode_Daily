class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> output;
        vector<int> curr;
        sort(candidates.begin(), candidates.end());
        backtrack(output, candidates, curr, 0, target);
        return output;
    }

    void backtrack(vector<vector<int>>& output,
                   const vector<int>& candidates,
                   vector<int>& curr, int start, int rem) {
        if (rem == 0) {
            output.push_back(curr);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {
            if (candidates[i] > rem) break;

            curr.push_back(candidates[i]);
            backtrack(output, candidates, curr, i, rem - candidates[i]);
            curr.pop_back();
        }
    }
};