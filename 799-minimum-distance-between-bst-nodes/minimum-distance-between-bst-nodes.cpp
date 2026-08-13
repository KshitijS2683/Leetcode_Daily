/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void minans(TreeNode* root, int &pre, int &ans)
    {
        if(root != NULL)
        {
            minans(root->left,pre,ans);
            ans = min(ans,root->val-pre);
            pre = root->val;
            minans(root->right,pre,ans);
        }
    }
    int minDiffInBST(TreeNode* root) {
        int ans =INT_MAX;
        int pre = -1000000;
        minans(root,pre,ans);
        return ans;
        
    }
};