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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> tmp;
        for(auto l: lists){
            while(l){
                tmp.push_back(l->val);
                l = l->next;
            }
        }
        sort(tmp.rbegin(), tmp.rend());
        ListNode* ans = nullptr;
        for(auto t: tmp) ans = new ListNode(t, ans);
        return ans;
    }
};
