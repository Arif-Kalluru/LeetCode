// Source : https://leetcode.com/problems/two-sum/

class Solution {
private:
  unordered_map<int, int> umap;

public:
  vector<int> twoSum(vector<int> &nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
      // Check if key is present in umap
      if (umap.find(target - nums[i]) != umap.end()) {
        return {umap[target - nums[i]], i};
      } else {
        umap[nums[i]] = i;
      }
    }
    return {-1, -1};
  }
};
