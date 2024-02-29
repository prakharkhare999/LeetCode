class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> que;
        
        que.push(root);
        bool even_level = true;
        
        while(!que.empty()) {
            
            int n = que.size();
            int prev;
            if(even_level)
                prev = INT_MIN;
            else
                prev = INT_MAX;
            
            while(n--) {
                
                TreeNode* node = que.front();
                que.pop();
                
                if (even_level && (node->val % 2 == 0 || node->val <= prev)) {
                    return false;
                }
                if (!even_level && (node->val % 2 == 1 || node->val >= prev)) {
                    return false;
                }
                
 
                
                prev = node->val;
                if(node->left) {
                    que.push(node->left);
                }
                if(node->right) {
                    que.push(node->right);
                }
                
            }
            
            even_level = !even_level;
            
        }
        
        return true;
    }
};
