class Solution {
public:
    void list(TreeNode* root, vector<int> &out)
    {
        if(root != NULL)
        {
            list(root->left, out);
            out.push_back(root->val);
            list(root->right, out);
        }
    }

    vector<int> findMode(TreeNode* root) {
        vector<int> out, output;
        list(root, out);

        unordered_map<int, int> cnt;
        int maxcount = 0;

        for (int x : out) {
            cnt[x]++;
            maxcount = max(maxcount, cnt[x]);
        }

        for (auto &p : cnt) {
            if (p.second == maxcount) {
                output.push_back(p.first);
            }
        }

        return output;
    }
};