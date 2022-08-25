// Source : https://leetcode.com/problems/add-two-numbers/

class Solution {
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    int c = 0;
    ListNode l3 = ListNode(-1);
    ListNode *t = &l3;
    while (l1 || l2 || c) {
      c += (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
      t->next = new ListNode(c % 10);
      t = t->next;
      c = c / 10;
      if (l1)
        l1 = l1->next;
      if (l2)
        l2 = l2->next;
    }
    return l3.next;
  }
};
