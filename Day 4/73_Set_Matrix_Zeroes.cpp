class Solution {
public:
  void setZeroes(vector<vector<int>>& matrix) {
    vector<pair<int, int>> zeros;
    
    for (int i = 0; i < matrix.size(); ++i) {
      for (int j = 0; j < matrix[0].size(); ++j) {
        if (matrix[i][j] == 0) {
          zeros.push_back({i, j});
        }
      }
    }

    for (const auto& zero : zeros) {
      int row = zero.first, col = zero.second;
      for (int j = 0; j < matrix[0].size(); ++j) {
        matrix[row][j] = 0; // Set entire row to 0
      }
      for (int k = 0; k < matrix.size(); ++k) {
        matrix[k][col] = 0; // Set entire column to 0
      }
    }
  }
};
