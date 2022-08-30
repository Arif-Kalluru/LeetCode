// Source :
// https://leetcode.com/problems/populating-next-right-pointers-in-each-node/

class Solution {
public:
  Node *connect(Node *root) {
    if (!root)
      return root;

    queue<Node *> Q;
    Q.push(root);

    while (!Q.empty()) {
      int n = Q.size();

      for (int i = 0; i < n; i++) {
        Node *curr = Q.front();
        Q.pop();

        if (i != n - 1) {
          curr->next = Q.front();
        } else {
          curr->next = nullptr;
        }

        if (curr->left)
          Q.push(curr->left);
        if (curr->right)
          Q.push(curr->right);
      }
    }

    return root;
  }
};
