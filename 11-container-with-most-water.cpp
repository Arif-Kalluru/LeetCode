// Source : https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
  int maxArea(vector<int> &height) {
    int i = 0, j = height.size() - 1;

    int max_area = 0;
    int area;

    while (i < j) {
      area = (j - i) * min(height[i], height[j]);
      max_area = max(area, max_area);

      if (height[i] <= height[j]) {
        i++;
      } else {
        j--;
      }
    }

    return max_area;
  }
};
