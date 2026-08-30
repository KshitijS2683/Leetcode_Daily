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
    void preorder(TreeNode* root , vector<int> &out)
    {
        if(root != NULL)
        {
            preorder(root->left,out);
            out.push_back(root->val);
            preorder(root->right, out);
        }
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> out;
        preorder(root,out);
        TreeNode* ans = new TreeNode(out[0]);
        TreeNode* temp = ans;
        for(int i = 1;i<out.size();i++)
        {
            TreeNode* next = new TreeNode(out[i]);
            temp->right = next;
            temp->left = NULL;
            temp = temp->right;
        }
        return ans;
        
    }
};