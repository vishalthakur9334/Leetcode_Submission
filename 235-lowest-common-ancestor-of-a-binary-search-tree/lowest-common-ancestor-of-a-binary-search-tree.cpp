class Solution {
public:
    TreeNode*ans=NULL;
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root->val==p->val || root->val==q->val){
            return root;
        }

        if(p->val < root->val && q->val < root->val){
            return lowestCommonAncestor(root->left,p,q);
        }
        else if(p->val >root->val && q->val > root->val){
            return lowestCommonAncestor(root->right,p,q);
        }
        else{
            ans=root;
        }
        return ans;
    }
};