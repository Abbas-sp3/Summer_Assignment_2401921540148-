class Solution
{
public:
  string longestCommonPrefix(vector<string> &strs)
  {
    if (strs.empty())
      return "";

    string prefix = "";
    int minLen = INT_MAX;

    for (const string &s : strs)
    {
      minLen = min(minLen, (int)s.length());
    }

    for (int i = 0; i < minLen; i++)
    {
      char ch = strs[0][i];
      for (const string &s : strs)
      {
        if (s[i] != ch)
        {
          return prefix;
        }
      }
      prefix += ch;
    }

    return prefix;
  }
};