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
    ListNode* partition(ListNode* head, int x) {
        ListNode *front = new ListNode(0);
        ListNode *back = new ListNode(0);
        ListNode *f = front;
        ListNode *b = back;

        while(head){
            if(head->val < x){
                f->next = head;
                f = f->next;
            }
            else{
                b->next = head;
                b = b->next;
            }
            head = head->next;
        }
        b->next = nullptr;
        f->next = back->next;
        return front->next;
    }
};
