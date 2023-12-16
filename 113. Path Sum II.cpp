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
void solve(TreeNode* root,int targetSum,int currsum,vector<int>path,vector<vector<int>>&ans ){
    if(root==NULL){
        return;
    }
    //leaf node 
    if(root->left==NULL && root->right==NULL){
        path.push_back(root->val);
    currsum+=root->val;
        if(currsum==targetSum){
           
            ans.push_back(path);
            return;
        }


    }
    //include cuurrr node
    path.push_back(root->val);
    currsum+=root->val;
    solve(root->left,targetSum,currsum,path,ans);
    solve(root->right,targetSum,currsum,path,ans);


}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
vector<int>temp;
int sum=0;
solve(root,targetSum,sum,temp,ans);
return ans;
        
    }
};
