// Source : https://leetcode.com/problems/binary-tree-inorder-traversal/

class Solution {
public:
  vector<int> result;

  vector<int> inorderTraversal(TreeNode *root) {
    if (!root)
      return {};

    inorderTraversal(root->left);
    result.push_back(root->val);
    inorderTraversal(root->right);

    return result;
  }
};
