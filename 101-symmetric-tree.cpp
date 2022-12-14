// Source : https://leetcode.com/problems/symmetric-tree/

class Solution {
public:
  bool isSymmetric(TreeNode *root) {
    queue<TreeNode *> Q;

    Q.push(root->left);
    Q.push(root->right);

    while (!Q.empty()) {
      TreeNode *p = Q.front();
      Q.pop();
      TreeNode *q = Q.front();
      Q.pop();

      if (!p && !q)
        continue;
      if (!p || !q)
        return false;
      if (p->val != q->val)
        return false;

      Q.push(p->left);
      Q.push(q->right);
      Q.push(p->right);
      Q.push(q->left);
    }
    return true;
  }
};
