class Codec {
public:
    string serialize(TreeNode* root) {
        string s;
        ser(root, s);
        return s;
    }
    void ser(TreeNode* n, string& s) {
        if (!n) {
            s += "#,";
            return;
        }
        s += to_string(n->val) + ",";
        ser(n->left, s);
        ser(n->right, s);
    }
    TreeNode* deserialize(string data) {
        queue<string> q;
        string v;
        for (char c : data) {
            if (c == ',') {
                q.push(v);
                v = "";
            } else v += c;
        }
        return des(q);
    }
    TreeNode* des(queue<string>& q) {
        string s = q.front();
        q.pop();
        if (s == "#") return nullptr;
        TreeNode* n = new TreeNode(stoi(s));
        n->left = des(q);
        n->right = des(q);
        return n;
    }
};
