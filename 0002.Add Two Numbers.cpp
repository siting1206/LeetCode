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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *l3 = new ListNode(0);
        ListNode *p1 = l1, *p2 = l2, *p3 = l3;
        int sum = 0, carry = 0;
        while(p1!=NULL && p2!=NULL){
            sum = p1->val + p2->val + carry;
            carry = sum / 10;
            p3->next = new ListNode(sum % 10);
            p1 = p1->next;
            p2 = p2->next;
            p3 = p3->next;
        }

        while(p1!=NULL || p2!=NULL || carry!=0){
            if(p1==NULL && p2==NULL){
                p3->next = new ListNode(carry);
                p3 = p3->next;
                carry = 0;
            }
            if(p1!=NULL){
                sum = p1->val + carry;
                carry = sum / 10;
                p3->next = new ListNode(sum % 10);
                p1 = p1->next;
                p3 = p3->next;
            }
            if(p2!=NULL){
                sum = p2->val + carry;
                carry = sum / 10;
                p3->next = new ListNode(sum % 10);
                p2 = p2->next;
                p3 = p3->next;
            }
        }
        return l3->next;
    }
};
