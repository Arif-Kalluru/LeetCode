// Source : https://leetcode.com/problems/delete-node-in-a-bst/

class Solution {
public:
  TreeNode *findMin(TreeNode *root) {
    while (root->left) {
      root = root->left;
    }

    return root;
  }

  TreeNode *deleteNode(TreeNode *root, int key) {
    if (!root) {
      return root;
    } else if (root->val > key) {
      root->left = deleteNode(root->left, key);
    } else if (root->val < key) {
      root->right = deleteNode(root->right, key);
    } else {
      if (!root->left && !root->right) {
        delete root;
        root = nullptr;
      } else if (!root->left) {
        TreeNode *temp = root;
        root = root->right;
        delete temp;
      } else if (!root->right) {
        TreeNode *temp = root;
        root = root->left;
        delete temp;
      } else {
        TreeNode *temp = findMin(root->right);
        root->val = temp->val;
        root->right = deleteNode(root->right, temp->val);
      }
    }

    return root;
  }
};
