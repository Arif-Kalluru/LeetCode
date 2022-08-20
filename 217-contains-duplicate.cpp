// Source : https://leetcode.com/problems/contains-duplicate/

class Solution {
public:
  bool containsDuplicate(vector<int> &nums) {
    unordered_map<int, int> umap;

    for (int i = 0; i < nums.size(); i++) {
      if (umap.count(nums[i]))
        return true;
      else
        umap[nums[i]]++;
    }
    return false;
  }
};
