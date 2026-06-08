class Solution
{
public:
  bool canConstruct(string ransomNote, string magazine)
  {

    unordered_map<char, int> ram;
    for (char c : magazine)
    {
      ram[c]++;
    }

    for (char c : ransomNote)
    {
      if (ram[c] <= 0)
      {
        return false;
      }
      ram[c]--;
    }
    return true;
  }
};