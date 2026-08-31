class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        vector<vector<int>>result;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>level;

            for(int i=0;i<size;i++){
                TreeNode*curr=q.front();
                q.pop();
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
                level.push_back(curr->val);
            }
            result.insert(result.begin(),level);
        }
        return result;
    }
};