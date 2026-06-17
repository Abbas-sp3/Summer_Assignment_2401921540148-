class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int> st;
        int ans = 0, n = h.size();
        for (int i = 0; i <= n; i++) {
            int cur = i == n ? 0 : h[i];
            while (!st.empty() && cur < h[st.top()]) {
                int ht = h[st.top()];
                st.pop();
                int w = st.empty() ? i : i - st.top() - 1;
                ans = max(ans, ht * w);
            }
            st.push(i);
        }
        return ans;
    }
};
