// Source : https://leetcode.com/problems/two-sum-iv-input-is-a-bst/

class Solution {
public:
  unordered_set<int> S;

  bool findTarget(TreeNode *root, int k) {
    if (!root)
      return false;
    if (findTarget(root->left, k))
      return true;
    if (S.find(k - root->val) != S.end())
      return true;
    S.insert(root->val);
    return findTarget(root->right, k);
  }
};
