class Solution {
    unordered_map<int, int> mp;
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for (int i = 0; i < inorder.size(); i++) mp[inorder[i]] = i;
        int i = 0;
        return build(preorder, i, 0, inorder.size() - 1);
    }
    TreeNode* build(vector<int>& pre, int& i, int l, int r) {
        if (l > r) return nullptr;
        TreeNode* nd = new TreeNode(pre[i++]);
        int m = mp[nd->val];
        nd->left = build(pre, i, l, m - 1);
        nd->right = build(pre, i, m + 1, r);
        return nd;
    }
};
