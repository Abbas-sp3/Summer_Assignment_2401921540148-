class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return eq(root, root);
    }
    bool eq(TreeNode* a, TreeNode* b) {
        if (!a || !b) return a == b;
        return a->val == b->val && eq(a->left, b->right) && eq(a->right, b->left);
    }
};
