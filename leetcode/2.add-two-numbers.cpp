#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int cf = 0;
    ListNode* ans = new ListNode();
    ListNode* ret = ans;
    do {
      int tmp = cf;
      cf = 0;
      if (l1 != nullptr && l2 != nullptr) {
        tmp += l1->val + l2->val;
        // cout << "case 1 " << l1->val << " " << l2->val;

      } else if (l1 == nullptr && l2 != nullptr) {
        tmp += l2->val;
        // cout << "case 2 " << l2->val;

      } else if (l2 == nullptr && l1 != nullptr) {
        tmp += l1->val;
        // cout << "case 3 " << l1->val;

      } 

      if (tmp > 9) cf = 1;

      ListNode* nextNode = new ListNode(tmp%10);
      ans->next = nextNode;

      // cout << " tmp:" << tmp << " cf:" << cf << " ans->val:" << ans->val << " ";
      //   ans->next = new ListNode();

      ans = ans->next;

      if (l1 != nullptr) l1 = l1->next;
      if (l2 != nullptr) l2 = l2->next;

      // cout << endl;
    } while (l1 != nullptr || l2 != nullptr || cf != 0);

    // cout << l1->val << " " << endl;
    // l1->next;
    // cout << l1->next->val << " " << endl;
    // l1->next;
    // cout << l1->val << " " << endl;
    return ret->next;
  }
};