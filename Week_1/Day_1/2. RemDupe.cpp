class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {
    if (nums.size() == 0)
      return 0;

    int writePos = 0;

    for (int i = 1; i < nums.size(); i++)
    {
      if (nums[i] != nums[writePos])
      {
        writePos++;
        nums[writePos] = nums[i];
      }
    }

    return writePos + 1;
  }
};