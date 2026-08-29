class Solution {
public:
    void fun(TreeNode*root,vector<int>&result){
        if(root==NULL){
            return ;
        }
        fun(root->left,result);
        result.push_back(root->val);
        fun(root->right,result);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>result;
        fun(root,result);
        return result;
    }
};