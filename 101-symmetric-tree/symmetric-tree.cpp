class Solution {
public:
    bool same(TreeNode*p,TreeNode*q){
        if(p==NULL && q==NULL){
            return true;
        }
        if(p==NULL || q==NULL){
            return false;
        }

        if(p->val != q->val){
            return false;
        }
        bool lefty=same(p->left,q->right);
        bool righty=same(p->right,q->left);

        return lefty && righty;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        return same(root->left,root->right);
    }
};