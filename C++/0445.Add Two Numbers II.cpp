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
        stack<int> s1, s2;
        int carry = 0;
        while(l1){
            s1.push(l1->val);
            l1 = l1->next;
        }
        while(l2){
            s2.push(l2->val);
            l2 = l2->next;
        }

        ListNode* ans = nullptr;
        while(!s1.empty() || !s2.empty() || carry){
            if(!s1.empty()){
                carry += s1.top();
                s1.pop();
            }
            if(!s2.empty()){
                carry += s2.top();
                s2.pop();
            }
            ListNode* tmp = new ListNode(carry % 10);
            carry /= 10;
            tmp->next = ans;
            ans = tmp;
        }
        return ans;
    }
};
