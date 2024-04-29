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
int height(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    int leftlength=height(root->left);
    int rightlength=height(root->right);
    int ans=max(leftlength,rightlength)+1;
    return ans;
  

}
    bool isBalanced(TreeNode* root) {
        //base case
if(root==NULL){
    return true;
}
//1 case
int left=height(root->left);
int right=height(root->right);
int diff=abs(left-right);
bool ans1=(diff<=1);
//recursion
bool leftans=isBalanced(root->left);
bool rightans=isBalanced(root->right);
if(ans1 && leftans && rightans){
    return true;
}
else{
    return false;
}

}

    
};




o(n)
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

int maxH(TreeNode* node){
    if(node == NULL) return 0;

    int lh = maxH(node -> left);
    int rh = maxH(node -> right);

    if(lh == -1 || rh == -1) return -1;
    if(abs(lh - rh) > 1) return -1;

    return 1 + max(lh , rh);
}

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        int maxheight = maxH(root);
        if(maxheight == -1) return false;
        return true;
    }
};
