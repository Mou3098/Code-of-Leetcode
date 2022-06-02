class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int column=matrix[0].size();
        vector<vector<int>> v(matrix[0].size(), vector<int>(matrix.size()));
        for (int i = 0; i < row; i++)
        {
      for (int j = 0; j < column; j++) {
         v[j][i] = matrix[i][j];
      }
        }
        return v;
    }
};