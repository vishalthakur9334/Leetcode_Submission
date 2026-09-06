class Solution {
public:
    TreeNode*ans=NULL;
    TreeNode* preorder(TreeNode*root,int key){
        if(root==NULL){
            return NULL;
        }
        if(root->val==key){
            ans=root;
        }
        preorder(root->left,key);
        preorder(root->right,key);

        return ans;
    }
    TreeNode* searchBST(TreeNode* root, int val) {
       return  preorder(root,val);
    }
};