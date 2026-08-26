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
    void leafSequence(TreeNode* root , vector<int> &out)
    {
        if(root != NULL)
        {
            leafSequence(root->left,out);
            if(root->left == NULL && root->right == NULL)
            {
                out.push_back(root->val);
            }
            leafSequence(root->right,out);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> out1,out2;
        leafSequence(root1,out1);
        leafSequence(root2,out2);
        return out1 == out2;
        
    }
};