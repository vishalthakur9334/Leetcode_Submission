class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>result;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            double sum=0;
            for(int i=0;i<n;i++){
                TreeNode*curr=q.front();
                q.pop();
                sum+=curr->val;

                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            result.push_back(sum/n);
        }
        return result;
    }
};