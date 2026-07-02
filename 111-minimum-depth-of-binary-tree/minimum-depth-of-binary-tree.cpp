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
    void answer(TreeNode* root,int curr,int &ans)
    {
        if(root->left == NULL && root->right == NULL)
        {
            curr++;
            ans = min(ans,curr);
        }
        else
        {
            curr++;
            if(root->left != NULL)
            {
                answer(root->left,curr,ans);
            }
            if(root->right != NULL)
            {
                answer(root->right,curr,ans);
            }
        }
    }
    int minDepth(TreeNode* root) {
        int curr = 0,ans = INT_MAX;
        if(root == NULL)
        {
            return 0;
        }
        answer(root,curr,ans);
        return ans;

        
    }
};