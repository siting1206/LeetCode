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
    ListNode* swapPairs(ListNode* head) {
        ListNode* left=head, *right;
        while(left!=nullptr){
            if(left->next==nullptr) break;
            right = left->next;
            swap(left->val, right->val);
            left = right->next;
        }
        return head;
    }
};
