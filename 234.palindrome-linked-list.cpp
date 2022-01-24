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
    ListNode* rev;
    bool ispal(ListNode* l){
        
        if(l == NULL){
            return 1;
        }
        bool upto = ispal(l->next);
        
        if(!upto) return 0;
        
        if(rev->val != l->val){
            return 0;
        }
        rev = rev->next;
        return 1;
    }
    
    bool isPalindrome(ListNode* head) {
        rev = head;
        return ispal(head);
    }
};