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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL && l2 == NULL) return NULL;
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        
        
        ListNode* ans1 = new ListNode(0);
        ListNode* ans = ans1;
        while(l1 != NULL || l2 != NULL){
            int L1 = l1 == nullptr ? INT_MAX : l1->val;
            int L2 = l2 == nullptr ? INT_MAX : l2->val;
            
            if(L1 < L2){
                ListNode* temp = new ListNode(l1->val);
                ans1 -> next = temp;
                ans1 = ans1 -> next;
                l1 = l1 -> next;
            }else {
                ListNode* temp = new ListNode(l2->val);
                ans1 -> next = temp;
                ans1 = ans1 -> next;
                l2 = l2 -> next;
            }
        }
        
        return ans -> next ;
    }
};