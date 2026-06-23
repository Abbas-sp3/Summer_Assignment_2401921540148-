class Solution {
    int ans = INT_MIN;
public:
    int maxPathSum(TreeNode* root) {
        gain(root);
        return ans;
    }
    int gain(TreeNode* n) {
        if (!n) return 0;
        int l = max(0, gain(n->left));
        int r = max(0, gain(n->right));
        ans = max(ans, n->val + l + r);
        return n->val + max(l, r);
    }
};
