class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return chk(root, LLONG_MIN, LLONG_MAX);
    }
    bool chk(TreeNode* n, long lo, long hi) {
        if (!n) return true;
        if (n->val <= lo || n->val >= hi) return false;
        return chk(n->left, lo, n->val) && chk(n->right, n->val, hi);
    }
};
