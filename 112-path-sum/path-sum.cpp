class Solution {
public:
    bool ans=false;
    void fun(TreeNode*root,int sum,int targetSum){
        if(root==NULL){
            return ;
        }

        sum+=root->val;

        if(root->left==NULL && root->right==NULL){
            if(sum==targetSum){
                ans=true;
                return ;
            }
        }
        fun(root->left,sum,targetSum);
        fun(root->right,sum,targetSum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        fun(root,0,targetSum);
        return ans;
    }
};