class Solution
{
public:
  vector<int> findAnagrams(string s, string p)
  {
    vector<int> res;

    if (p.size() > s.size())
    {
      return res;
    }

    vector<int> pFreq(26, 0);
    vector<int> windowFreq(26, 0);

    for (char ch : p)
    {
      pFreq[ch - 'a']++;
    }

    int windowSize = p.size();

    for (int i = 0; i < windowSize; i++)
    {
      windowFreq[s[i] - 'a']++;
    }

    if (pFreq == windowFreq)
    {
      res.push_back(0);
    }

    int left = 0;

    for (int right = windowSize; right < s.size(); right++)
    {
      windowFreq[s[right] - 'a']++;
      windowFreq[s[left] - 'a']--;
      left++;

      if (windowFreq == pFreq)
      {
        res.push_back(left);
      }
    }

    return res;
  }
};