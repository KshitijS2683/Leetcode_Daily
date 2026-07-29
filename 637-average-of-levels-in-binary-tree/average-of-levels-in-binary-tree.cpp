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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> out;
        queue<TreeNode*> q1,q2,q3;
        q1.push(root);
        while(!q1.empty())
        {
            double sum = 0;
            double elements = q1.size();
            while(!q1.empty())
            {
                if(q1.front()->left != NULL)
                {
                    q2.push(q1.front()->left);
                }
                if(q1.front()->right != NULL)
                {
                    q2.push(q1.front()->right);
                }
                if(q1.front() != NULL)
                {
                    sum += q1.front()->val;
                }
                q1.pop();
            }
            q1 = q2;
            q2 = q3;
            out.push_back(sum/elements);
        }
        return out;
        
    }
};