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
class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head || !head->next || !head->next->next) return
        ;
        // Find the Middle Node
        ListNode *fast = head, *slow = head;
        while(fast->next && fast->next->next) {
            fast = fast->next->next;
            slow = slow->next;
        }

        // Reverse the Second List
        ListNode *cur = slow->next, *pre = NULL;
        slow->next = NULL;
        while (cur != nullptr) {
            ListNode *next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }

        // Merge
        ListNode *t1, *t2;
        while(head != nullptr && pre != nullptr) {
            t1 = head->next;
            t2 = pre->next;
            head->next = pre;
            pre->next = t1;
            head = t1;
            pre = t2;
        }
    }
};
