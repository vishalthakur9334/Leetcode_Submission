class Solution {
public:
    void fun(TreeNode*p){
        if(p==NULL){
            return ;
        }
        swap(p->left,p->right);
        fun(p->left);
        fun(p->right);
    }
    TreeNode* invertTree(TreeNode* root) {
         fun(root);
         return root;
    }
};