class Solution {
public:
    int maxDepth;
    int bottomLeft;
    
    void solve(TreeNode* root, int currDepth) {
        if(!root) {
            return;
        }
        
        if(currDepth > maxDepth) {
            maxDepth   = currDepth;
            bottomLeft = root->val;
        }
        
        solve(root->left, currDepth+1);
        solve(root->right, currDepth+1);
    }
    
    int findBottomLeftValue(TreeNode* root) {
        maxDepth = -1;
        
        solve(root, 0);
        return bottomLeft;
        
    }
};

