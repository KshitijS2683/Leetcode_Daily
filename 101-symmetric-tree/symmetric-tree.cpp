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
    // void preorder(TreeNode* root,vector<int> &out)
    // {
    //     if(root != NULL)
    //     {
    //         preorder(root->left,out);
    //         out.push_back(root->val);
    //         preorder(root->right,out);
    //     }

    // }
    // void postorder(TreeNode* root,vector<int> &out)
    // {
    //     if(root != NULL)
    //     {
    //         postorder(root->right,out);
    //         out.push_back(root->val);
    //         postorder(root->left,out);
    //     }
    // }
    bool check(TreeNode* a,TreeNode* b)
    {
        if(a != NULL && b != NULL)
        {
            if(a->val != b->val)
            {
                return false;
            }
            else
            {
                return check(a->left,b->right) && check(a->right,b->left);
            }

        }
        else if(a == NULL && b == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isSymmetric(TreeNode* root) {
        // vector<int> pre,pro;
        // preorder(root,pre);
        // postorder(root,pro);
        // return pre == pro;
        return check(root,root);
    }
};