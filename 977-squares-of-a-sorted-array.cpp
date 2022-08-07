// Source : https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution {
public:
  vector<int> sortedSquares(vector<int> &nums) {
    vector<int> result(nums.size());

    int i = 0, j = nums.size() - 1, k = nums.size() - 1;

    while (i <= j) {
      if (abs(nums[i]) < abs(nums[j])) {
        result[k] = nums[j] * nums[j];
        j--;
      } else {
        result[k] = nums[i] * nums[i];
        i++;
      }

      k--;
    }

    return result;
  }
};
