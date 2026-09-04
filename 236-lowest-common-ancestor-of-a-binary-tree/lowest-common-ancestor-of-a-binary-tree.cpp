class Solution {
public:
    TreeNode*ans=NULL;
    int fun(TreeNode*root,TreeNode*p,TreeNode*q){
        if(root==NULL){
            return 0;
        }
        int left=fun(root->left,p,q);
        int right=fun(root->right,p,q);

        int self=0;
        if(root==p || root==q){
            self=1;
        }

        int total=left+self+right;

        if(total==2 && ans==NULL){
            ans=root;
        }

        return total;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        fun(root,p,q);
        return ans;
    }
};