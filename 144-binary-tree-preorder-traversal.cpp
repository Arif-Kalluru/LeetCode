// Source : https://leetcode.com/problems/binary-tree-preorder-traversal/

class Solution {
public:
  vector<int> result;

  vector<int> preorderTraversal(TreeNode *root) {
    if (!root)
      return {};

    result.push_back(root->val);
    preorderTraversal(root->left);
    preorderTraversal(root->right);

    return result;
  }
};
