class Solution
{
public:
  vector<int> factor(int n)
  {
    vector<int> ans;
    for (int i = 1; i * i <= n; i++)
    {
      if (n % i == 0)
      {
        ans.push_back(i);
        if (i != n / i && n / i != n)
          ans.push_back(n / i);
      }
    }
    sort(ans.begin(), ans.end());
    return ans;
  }
  bool repeatedSubstringPattern(string s)
  {

    int n = s.size();
    if (n == 1)
      return false;
    vector<int> factors = factor(n);
    int x = factors.size();

    for (int i = 0; i < x; i++)
    {
      string sub = s.substr(0, factors[i]);

      int r = (n / factors[i]) - 1;
      string temp = sub;
      while (r--)
      {
        sub += temp;
      }
      if (sub == s)
        return true;
    }
    return false;
  }
};