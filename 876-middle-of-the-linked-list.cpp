// Source : https://leetcode.com/problems/middle-of-the-linked-list/

class Solution {
public:
  ListNode *middleNode(ListNode *head) {
    ListNode *fast = head, *slow = head;

    while (fast != nullptr && fast->next != nullptr) {
      fast = fast->next->next;
      slow = slow->next;
    }

    return slow;
  }
};
