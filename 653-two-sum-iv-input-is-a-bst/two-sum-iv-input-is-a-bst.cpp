class Solution {
public:
    void traverse(TreeNode* root, unordered_map<int,int> &inp)
    {
        if(root != NULL)
        {
            inp[root->val]++;
            traverse(root->left, inp);
            traverse(root->right, inp);
        }
    }

    bool findTarget(TreeNode* root, int k) {
        unordered_map<int,int> inp;
        traverse(root, inp);

        for(auto &x : inp)
        {
            int val = x.first;
            int target = k - val;

            if(val != target)
            {
                if(inp.find(target) != inp.end())
                {
                    return true;
                }
            }
            else
            {
                if(x.second > 1)
                {
                    return true;
                }
            }
        }

        return false;
    }
};