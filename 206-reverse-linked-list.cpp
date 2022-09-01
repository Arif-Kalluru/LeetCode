// Source : https://leetcode.com/problems/reverse-linked-list/

class Solution {
public:
  ListNode *reverseList(ListNode *head) {
    if (!head)
      return nullptr;

    ListNode *prev = nullptr;

    while (head->next) {
      ListNode *temp = head->next;
      head->next = prev;
      prev = head;
      head = temp;
    }

    head->next = prev;
    return head;
  }
};

/*
class Solution {
public:
  ListNode *reverseList(ListNode *head) {
    if (!head || !head->next) {
      return head;
    }

    ListNode *node = reverseList(head->next);
    head->next->next = head;
    head->next = nullptr;
    return node;
  }
};
*/
