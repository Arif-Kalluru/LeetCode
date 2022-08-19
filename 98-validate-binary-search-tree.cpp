// Source : https://leetcode.com/problems/validate-binary-search-tree/

class Solution {
public:
  bool isValidBST(TreeNode *root) {
    TreeNode *prev = nullptr;
    return validate(root, prev);
  }
  bool validate(TreeNode *node, TreeNode *&prev) {
    if (!node)
      return true;
    if (!validate(node->left, prev))
      return false;
    if (prev && node->val <= prev->val)
      return false;
    prev = node;
    return validate(node->right, prev);
  }
};
