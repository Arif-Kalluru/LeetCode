// Source : https://leetcode.com/problems/flood-fill/

class Solution {
public:
  void changeColor(vector<vector<int>> &image, int i, int j, int val,
                   int color) {
    if (i < 0 || j < 0 || i >= image.size() || j >= image[0].size() ||
        image[i][j] == color || image[i][j] != val)
      return;
    image[i][j] = color;
    changeColor(image, i, j - 1, val, color);
    changeColor(image, i, j + 1, val, color);
    changeColor(image, i + 1, j, val, color);
    changeColor(image, i - 1, j, val, color);
  }

  vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc,
                                int color) {
    int val = image[sr][sc];
    changeColor(image, sr, sc, val, color);
    return image;
  }
};
