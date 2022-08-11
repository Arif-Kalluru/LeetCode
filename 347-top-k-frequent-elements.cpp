// Source : https://leetcode.com/problems/top-k-frequent-elements/

class Solution {
public:
  vector<int> topKFrequent(vector<int> &nums, int k) {
    vector<int> result;
    unordered_map<int, int> freq;

    for (auto num : nums)
      freq[num]++;

    priority_queue<pair<int, int>> pq;

    for (auto it : freq)
      pq.push({it.second, it.first});

    while (k) {
      result.push_back(pq.top().second);
      pq.pop();
      k--;
    }
    return result;
  }
};
