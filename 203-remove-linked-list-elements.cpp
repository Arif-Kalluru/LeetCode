// Source : https://leetcode.com/problems/remove-linked-list-elements/

class Solution {
public:
  ListNode *removeElements(ListNode *head, int val) {
    ListNode *dummy = new ListNode(0, head);
    ListNode *prev = dummy;

    while (head) {
      if (head->val == val) {
        prev->next = prev->next->next;
        ListNode *temp = head;
        head = head->next;
        delete temp;
      } else {
        head = head->next;
        prev = prev->next;
      }
    }
    head = dummy->next;
    delete dummy;
    return head;
  }
};
