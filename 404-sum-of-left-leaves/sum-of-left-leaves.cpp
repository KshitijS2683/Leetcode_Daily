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
    void out(TreeNode* root,int &output,bool side)
    {
        if(root != NULL && root->left == NULL && root->right == NULL && side)
        {
            output += root->val;
        }
        if(root != NULL)
        {
            out(root->left,output,true);
            out(root->right,output,false);
        }

    }
    int sumOfLeftLeaves(TreeNode* root) {
        bool side = false;
        int output = 0;
        out(root,output,false);
        return output;

        
    }
};