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
public:// Trying with brute force
    ListNode* swapNodes(ListNode* head, int k) {

        vector<int> t;
        while(head != NULL) {
            t.push_back(head->val);
            head = head->next;
        }
        
        swap(t[k-1],t[t.size()-k]);
        // for(int i=0;i<t.size();i++){
        //     cout<<t[i]<<" ";
        // }
        ListNode* ans = new ListNode(0);
        ListNode* realans = ans;
        
        for(int i=0;i<t.size();i++){
            ListNode* t1 = new ListNode(t[i]);
            ans->next = t1;
            ans = ans ->next;
        }
        
        return realans->next;
        
    }
};