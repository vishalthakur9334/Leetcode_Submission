class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        vector<vector<int>>result;
        queue<TreeNode*>q;
        q.push(root);
        bool flag=0;   // 0-> from left to right  && 1-> from right to left 
        while(!q.empty()){
            int n=q.size();
            vector<int>level;
            for(int i=0;i<n;i++){
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
             if(flag){
                    reverse(level.begin(),level.end());
                }
            flag=!flag;
            result.push_back(level);
        }
        return result;
    }
};