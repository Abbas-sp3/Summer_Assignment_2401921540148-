class Solution
{
public:
  bool containsDuplicate(vector<int> &nums)
  {
    unordered_map<int, int> alrPresent;
    for (int i : nums)
    {
      if (alrPresent[i] >= 1)
      {
        return true;
      }
      alrPresent[i]++;
    }
    return false;
  }
};