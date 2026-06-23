class Solution {
    int ans = 0;
public:
    int diameterOfBinaryTree(TreeNode* root) {
        h(root);
        return ans;
    }
    int h(TreeNode* n) {
        if (!n) return 0;
        int l = h(n->left);
        int r = h(n->right);
        ans = max(ans, l + r);
        return 1 + max(l, r);
    }
};
