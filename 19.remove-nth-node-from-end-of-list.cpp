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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int> v;
        int sz = 0;
        while(head){
            sz++;
            v.push_back(head->val);
            head = head->next;
        }
        int n1 = sz - n;
        v.erase(v.begin()+n1);
        ListNode* a = new ListNode(0);
        ListNode* ans = a;
        for(auto &k : v){
            ListNode* cur = new ListNode(k);
            a->next = cur; a = a -> next;
        }
        
        return ans->next;
    }
};