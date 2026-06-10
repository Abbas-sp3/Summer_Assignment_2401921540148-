class Solution
{
public:
  int func(int i, int j, int n1, int n2, string &s1, string &s2)
  {
    if (j == n2)
      return i - j;
    if (i == n1)
      return -1;

    if (s1[i] == s2[j])
    {
      return func(i + 1, j + 1, n1, n2, s1, s2);
    }
    else
    {
      if (j > 0)
      {
        return func(i - j + 1, 0, n1, n2, s1, s2);
      }
      else
        return func(i + 1, 0, n1, n2, s1, s2);
    }
    return -1;
  }

  int strStr(string haystack, string needle)
  {

    int n = haystack.size(), m = needle.size();
    for (int i = 0; i <= n - m; i++)
    {
      int j = 0;
      while (j < m && haystack[i + j] == needle[j])
      {
        j++;
      }
      if (j == m)
        return i;
    }

    return -1;
  }
};