/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right)
 *         : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void traverse(TreeNode* root, set<int>& inp)
    {
        if (root != NULL)
        {
            inp.insert(root->val);
            traverse(root->left, inp);
            traverse(root->right, inp);
        }
    }

    int findSecondMinimumValue(TreeNode* root)
    {
        set<int> inp;
        traverse(root, inp);

        if (inp.size() < 2)
        {
            return -1;
        }

        auto it = inp.begin();
        it++;                   // move to second smallest element
        return *it;
    }
};