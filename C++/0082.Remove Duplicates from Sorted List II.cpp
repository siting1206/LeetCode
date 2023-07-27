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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* tmpList = new ListNode(0, head);
        ListNode* tmp = tmpList;
        while(head){
            int count=0;
            while(head->next && head->val==head->next->val){
                count++;
                head = head->next;
            }
            if(count==0){
                tmp->next = head;
                tmp = tmp->next;
            }
            head = head->next;
        }
        tmp->next=nullptr;
        return tmpList->next;
    }
};
