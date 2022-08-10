// Source : https://leetcode.com/problems/longest-consecutive-sequence/

class Solution {
public:
  int longestConsecutive(vector<int> &nums) {
    unordered_set<int> s(begin(nums), end(nums));
    int longest = 0;
    for (auto &num : s) {
      if (s.count(num - 1))
        continue;
      int curr_count = 1;
      while (s.count(num + curr_count))
        curr_count++;
      longest = max(longest, curr_count);
    }
    return longest;
  }
};
