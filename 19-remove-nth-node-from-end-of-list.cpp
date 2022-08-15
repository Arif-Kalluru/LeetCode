// Source : https://leetcode.com/problems/remove-nth-node-from-end-of-list/

class Solution {
public:
  ListNode *removeNthFromEnd(ListNode *head, int n) {
    ListNode *slow = head;
    ListNode *fast = head;

    while (n > 0) {
      n--;
      fast = fast->next;
    }

    if (fast == nullptr) {
      ListNode *tmp = head;
      head = head->next;
      delete tmp;
      return head;
    }

    while (fast->next != nullptr) {
      slow = slow->next;
      fast = fast->next;
    }

    ListNode *tmp = slow->next;
    slow->next = slow->next->next;
    delete tmp;
    return head;
  }
};
