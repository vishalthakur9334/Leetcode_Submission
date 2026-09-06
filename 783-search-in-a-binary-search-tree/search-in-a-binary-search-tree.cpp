/*Just to practice on normal tree: preorder 

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
*/
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
class Solution{
    public:
    TreeNode* searchBST(TreeNode* root, int val){
        if(root==NULL){
            return NULL;
        }
        // think as normal binary search : as an array :_)
        while(root){
            if(root->val==val){
                return root;
            }
            else if(root->val>val){
                root=root->left;
            }
            else{
                root=root->right;
            }
        }
        return NULL;
    }
};