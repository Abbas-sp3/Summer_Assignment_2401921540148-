class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        bool rev = false;
        while (!q.empty()) {
            int n = q.size();
            vector<int> row(n);
            for (int i = 0; i < n; i++) {
                TreeNode *t = q.front();
                q.pop();
                if (rev) row[n - 1 - i] = t->val;
                else row[i] = t->val;
                if (t->left) q.push(t->left);
                if (t->right) q.push(t->right);
            }
            ans.push_back(row);
            rev = !rev;
        }
        return ans;
    }
};
