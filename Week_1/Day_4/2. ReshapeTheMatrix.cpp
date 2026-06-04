class Solution
{
public:
  vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
  {
    int n = mat.size(), m = mat[0].size();
    vector<vector<int>> ans(r, vector<int>(c));

    int rn = 0, cn = 0;

    if (r * c != m * n)
      return mat;

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        ans[rn][cn] = mat[i][j];
        cn++;

        if (cn == c)
        {
          cn = 0;
          rn++;
        }
      }
    }

    return ans;
  }
};