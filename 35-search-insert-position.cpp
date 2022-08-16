// Source : https://leetcode.com/problems/search-insert-position/

class Solution {
public:
  int searchInsert(vector<int> &nums, int target) {
    if (target > nums[nums.size() - 1])
      return nums.size();
    else if (target < nums[0])
      return 0;

    int l = 0, r = nums.size() - 1, mid;

    while (l < r) {
      mid = l + (r - l) / 2;
      if (target == nums[mid])
        return mid;
      else if (target > nums[mid])
        l = mid + 1;
      else
        r = mid;
    }
    return l;
  }
};
