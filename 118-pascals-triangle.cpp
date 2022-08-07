// Source : https://leetcode.com/problems/pascals-triangle/

class Solution {
private:
  vector<vector<int>> ptriangle;

public:
  vector<vector<int>> generate(int numRows) {
    for (int i = 0; i < numRows; i++) {
      vector<int> row(i + 1, 1);
      for (int j = 1; j < i; j++) {
        row[j] = ptriangle[i - 1][j - 1] + ptriangle[i - 1][j];
      }
      ptriangle.push_back(row);
    }

    return ptriangle;
  }
};
