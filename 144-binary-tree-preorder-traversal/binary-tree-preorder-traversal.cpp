class Solution {
public:
    void fun(TreeNode*root,vector<int>&result){
        if(root==NULL){
            return ;
        }
        result.push_back(root->val);
        fun(root->left,result);
        fun(root->right,result);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>result;
        fun(root,result);
        return result;
    }
};