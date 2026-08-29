class Solution {
public:
    void fun(TreeNode*root,vector<int>&result){
        if(root==NULL){
            return ;
        }
        fun(root->left,result);
        fun(root->right,result);
        result.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>result;
        fun(root,result);
        return result;
    }
};