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
        if(head == NULL) return head;
        if(head->next == NULL) return head;
        
        auto p = head,q = head->next;
        auto previous = p;
        ListNode* last = NULL;
        while(q){
            while(q && p->val == q->val) // p == q
            {
                p = q;
                q = q->next;
            }
            if(previous == p)
            {
                last = previous;
            }
            else{
                if(last) last->next = q;
                else head = q;
            }
            previous = q;
            p = q;
            if(q != NULL) q = q->next;
        }
        return head;
    }
};