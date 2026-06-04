class Solution
{
public:
  int diagonalSum(vector<vector<int>> &mat)
  {
    int m = mat.size();
    int c = 0;

    for (int i = 0; i < m; i++)
    {
      c += mat[i][i];
      c += mat[i][m - 1 - i];
    }

    if (m % 2 == 1)
    {
      c -= mat[m / 2][m / 2];
    }

    return c;
  }
};