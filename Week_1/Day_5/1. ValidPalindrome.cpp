class Solution
{
private:
  char lowerCase(char ch)
  {
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
      return ch;
    }
    else
    {
      return (ch - 'A' + 'a');
    }
  }

public:
  bool isPalindrome(string s)
  {
    string temp = "";

    for (int i = 0; i < s.length(); i++)
    {
      if (((s[i] >= 'a') && (s[i] <= 'z')) || ((s[i] >= 'A') && (s[i] <= 'Z')) || ((s[i] >= '0') && (s[i] <= '9')))
      {
        temp.push_back(s[i]);
      }
    }

    for (int j = 0; j < temp.size(); j++)
    {
      temp[j] = lowerCase(temp[j]);
    }

    int start = 0;
    int end = temp.length() - 1;
    while (start < end)
    {
      if (temp[start] != temp[end])
        return 0;
      else
      {
        start++;
        end--;
      }
    }
    return 1;
  }
};