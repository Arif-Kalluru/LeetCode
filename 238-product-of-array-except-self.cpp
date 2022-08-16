// Source : https://leetcode.com/problems/product-of-array-except-self/

class Solution {
public:
  vector<int> productExceptSelf(vector<int> &nums) {
    int n = nums.size();

    vector<int> result(n);

    result[n - 1] = 1;

    for (int i = n - 2; i >= 0; i--)
      result[i] = nums[i + 1] * result[i + 1];

    int left_product = 1;
    for (int i = 0; i < n; i++) {
      result[i] *= left_product;
      left_product *= nums[i];
    }
    return result;
  }
};
