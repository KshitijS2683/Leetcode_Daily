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
    void map(TreeNode* root,int h, int parent ,unordered_map<int,pair<int,int>> &inp)
    {
        if(root != NULL)
        {
            inp[root->val] = {h,parent};
            map(root->left,h+1,root->val,inp);
            map(root->right,h+1,root->val,inp);
        }
    }
    bool isCousins(TreeNode* root, int x, int y) {
        unordered_map<int,pair<int,int>> inp;
        map(root,1,-1,inp);
        return (inp[x].first == inp[y].first && inp[x].second != inp[y].second);
        
    }
};