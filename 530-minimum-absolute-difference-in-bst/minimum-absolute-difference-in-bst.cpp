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
    void pre(TreeNode* root,vector<int> &out)
    {
        if(root != NULL)
        {
            pre(root->left,out);
            out.push_back(root->val);
            pre(root->right,out);
        }
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> out;
        pre(root,out);
        int diff = INT_MAX;
        for(int i = 1;i<out.size();i++)
        {
            diff = min(diff,out[i] - out[i-1]);
        }
        return diff;
        
    }
};