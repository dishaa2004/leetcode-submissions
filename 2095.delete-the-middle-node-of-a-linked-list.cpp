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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* curr = head;
        ListNode* p1 = head;
        int c = 0;
        vector<int> v;
        while (curr != NULL){
            c++;
            v.push_back(curr->val);
            curr = curr->next;
            
        }
        ListNode* ans = new ListNode(0);
        ListNode* realans = ans;
        
        for(int i=0;i<v.size();i++){
            if(i == (v.size()/2)){
                
            }else{
                ListNode* cur = new ListNode(v[i]);
                ans->next = cur;
                ans = ans->next;
            }
        }
        
        return realans->next;
    }
};