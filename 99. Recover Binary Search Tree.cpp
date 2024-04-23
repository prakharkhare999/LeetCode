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
    vector<int> v{};
    void inorder(TreeNode* root)
    {
        if(root != NULL)
        {
            inorder(root->left);
            v.push_back(root->val);
            inorder(root->right);
        }
    }
    void check(TreeNode* root)
    {
        if(root != NULL)
        {
            check(root->left);
            if(root->val != v.back())
            {
                root->val = v.back();
            }
            v.pop_back();
            check(root->right);
        }
    }
public:
    void recoverTree(TreeNode* root) {
       inorder(root);
       sort(v.begin(), v.end(), [](int &a, int &b){return a > b;});
       check(root);

    }
};
