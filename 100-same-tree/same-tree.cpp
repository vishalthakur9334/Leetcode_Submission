class Solution {
public:
    void preorder(TreeNode* root, vector<int>& ans) {
    if (root == NULL) {
        ans.push_back(INT_MIN);
        return;
    }

    ans.push_back(root->val);

    preorder(root->left, ans);
    preorder(root->right, ans);
}
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) {
            return true;
        }
        if (p == NULL || q == NULL) {
            return false;
        }

        vector<int> parr;
        vector<int> qarr;
        preorder(p, parr);
        preorder(q, qarr);
        if (parr.size() != qarr.size()) {
            return false;
        }
        for (int i = 0; i < parr.size(); i++) {
            if (parr[i] != qarr[i]) {
                return false;
            }
        }
        return true;
    }
};