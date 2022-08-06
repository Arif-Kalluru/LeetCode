// Source : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
  int maxProfit(vector<int> &prices) {
    int min_value = prices[0];
    int max_diff = 0;

    for (int i = 1; i < prices.size(); i++) {
      min_value = min(min_value, prices[i]);
      max_diff = max(max_diff, prices[i] - min_value);
    }

    return max_diff;
  }
};
