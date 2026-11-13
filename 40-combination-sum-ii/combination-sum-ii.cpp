class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        set<vector<int>> out;
        vector<int> curr;
        backtrack(out, candidates, 0, curr, target);

        return vector<vector<int>>(out.begin(), out.end());
    }

    void backtrack(set<vector<int>>& out,
                   const vector<int>& nums,
                   int i,
                   vector<int>& curr,
                   int rem) {

        if(i<nums.size() && i > 0 && !curr.empty() && nums[i] != curr.back() && nums[i] == nums[i-1])
        {
            return;
        }
        if (rem == 0) {
            out.insert(curr);
            return;
        }

        if (i >= nums.size() || nums[i] > rem) {
            return;
        }

        // Include nums[i].
        curr.push_back(nums[i]);
        backtrack(out, nums, i + 1, curr, rem - nums[i]);
        curr.pop_back();

        int next = i + 1;
        while (next < nums.size() && nums[next] == nums[i]) {
            next++;
        }
        backtrack(out, nums, next, curr, rem);
    }
};