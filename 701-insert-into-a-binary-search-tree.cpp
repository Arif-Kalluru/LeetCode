// Source : https://leetcode.com/problems/insert-into-a-binary-search-tree/

class Solution {
public:
  TreeNode *insertIntoBST(TreeNode *root, int val) {
    TreeNode **curr = &root;
    while (*curr)
      curr = (val > (*curr)->val) ? &(*curr)->right : &(*curr)->left;
    *curr = new TreeNode(val);
    return root;
  }
};
// Recursion: Space complexity = O(n); Iterative: Space complexity = O(1)
/*
class Solution {
public:
  TreeNode *insertIntoBST(TreeNode *root, int val) {
    if (!root)
      return new TreeNode(val);

    if (root->val < val) {
      root->right = insertIntoBST(root->right, val);
    } else {
      root->left = insertIntoBST(root->left, val);
    }

    return root;
  }
};
*/
