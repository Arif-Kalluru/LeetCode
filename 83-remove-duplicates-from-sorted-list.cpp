// Source : https://leetcode.com/problems/remove-duplicates-from-sorted-list/

class Solution {
public:
  ListNode *deleteDuplicates(ListNode *head) {
    if (!head || !head->next)
      return head;

    ListNode *prev = head, *curr = head->next;

    while (curr) {
      if (prev->val == curr->val) {
        ListNode *tmp = curr;
        curr = curr->next;
        prev->next = curr;
        delete tmp;
      } else {
        prev = prev->next;
        curr = curr->next;
      }
    }

    return head;
  }
};
