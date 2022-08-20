// Source : https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

class Solution {
public:
  vector<int> twoSum(vector<int> &numbers, int target) {
    int l = 0;
    int r = numbers.size() - 1;

    vector<int> result;

    while (l < r) {
      int sum = numbers[l] + numbers[r];
      if (sum < target) {
        l++;
      } else if (sum > target) {
        r--;
      } else {
        result.push_back(l + 1);
        result.push_back(r + 1);
        break;
      }
    }

    return result;
  }
};
