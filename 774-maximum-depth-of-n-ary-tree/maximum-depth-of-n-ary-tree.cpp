/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void ans(Node* root,int &out,int curr)
    {
        if(root != NULL)
        {
            out = max(out,curr);
            for(int i = 0;i<root->children.size();i++)
            {
                ans(root->children[i],out,curr+1);
            }
        }
    }
    int maxDepth(Node* root) {
        if(root == NULL)
        {
            return 0;
        }
        int out = 0;
        ans(root,out,1);
        return out;
        
    }
};