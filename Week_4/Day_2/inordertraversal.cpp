class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;
        TreeNode *c = root;
        while (c || !st.empty()) {
            while (c) {
                st.push(c);
                c = c->left;
            }
            c = st.top();
            st.pop();
            ans.push_back(c->val);
            c = c->right;
        }
        return ans;
    }
};
