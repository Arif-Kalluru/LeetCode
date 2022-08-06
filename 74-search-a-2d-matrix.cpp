// Source : https://leetcode.com/problems/search-a-2d-matrix/

class Solution {
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();
    int start = 0, end = n * m - 1;

    if (target > matrix[m - 1][n - 1] || target < matrix[0][0])
      return false;

    while (start <= end) {
      int mid = start + (end - start) / 2;
      int element = matrix[mid / n][mid % n];

      if (target == element)
        return true;
      else if (target > element)
        start = mid + 1;
      else
        end = mid - 1;
    }

    return false;
  }
};
