class Solution {
public:
    int fun(TreeNode*root){
        if(root==NULL){
            return 0;
        }

        int lefty=fun(root->left);
        int righty=fun(root->right);

        return 1+max(lefty,righty);
    }
    int maxDepth(TreeNode* root) {
        return fun(root);
    }
};