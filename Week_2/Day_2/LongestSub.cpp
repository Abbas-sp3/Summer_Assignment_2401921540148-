class Solution
{
public:
  int lengthOfLongestSubstring(string s)
  {

    int n = s.size();

    if (n == 0)
      return 0;
    int ans = 1;
    unordered_map<int, int> m;
    int i = 0;
    for (int j = 0; j < n; j++)
    {
      m[s[j]]++;
      while (m[s[j]] > 1)
      {
        m[s[i++]]--;
      }
      ans = max(ans, j - i + 1);
    }

    return ans;
  }
};