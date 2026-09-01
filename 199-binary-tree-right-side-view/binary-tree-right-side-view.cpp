
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if (root == NULL) {
            return {};
        }
        queue<TreeNode*> q;
        vector<vector<int>> result;
        q.push(root);
        while (!q.empty()) {
            int n = q.size();
            vector<int> level;
            for (int i = 0; i < n; i++) {
                TreeNode* curr = q.front();
                q.pop();
                if (curr->left) {
                    q.push(curr->left);
                }
                if (curr->right) {
                    q.push(curr->right);
                }
                level.push_back(curr->val);
            }
            result.push_back(level);
        }

        vector<int> right;
        for (int i = 0; i < result.size(); i++) {
            right.push_back(result[i][result[i].size() - 1]);
        }
        return right;
    }
};