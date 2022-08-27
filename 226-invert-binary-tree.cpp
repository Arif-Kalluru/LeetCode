// Source : https://leetcode.com/problems/invert-binary-tree/

class Solution {
public:
  TreeNode *invertTree(TreeNode *root) {
    queue<TreeNode *> Q;
    Q.push(root);

    while (!Q.empty()) {
      TreeNode *curr = Q.front();
      Q.pop();
      if (curr) {
        TreeNode *temp = curr->right;
        curr->right = curr->left;
        curr->left = temp;
        Q.push(curr->right);
        Q.push(curr->left);
      }
    }

    return root;
  }
};

/*
class Solution {
public:
  TreeNode *invertTree(TreeNode *root) {
    if (root) {
      invertTree(root->left);
      invertTree(root->right);
      TreeNode *temp = root->right;
      root->right = root->left;
      root->left = temp;
    }

    return root;
  }
};
*/

// Tree can be skewed, which effectively makes it a linked list.
// And if we recurse in a large linked list, the call stack might overflow. 
