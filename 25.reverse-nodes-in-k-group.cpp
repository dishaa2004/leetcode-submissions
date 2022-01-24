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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k == 1){
            return head;
        }
        if(head == NULL || head->next == NULL){
            return head;
        }
        vector<int> v;
        while(head != NULL){
            v.push_back(head->val);
            head = head->next;
        }

        for(int i=0;i<v.size();i+=k){
            if(i<=v.size()-k){
                reverse(v.begin()+i,v.begin()+i+k);
            }
        }

        ListNode* ans = new ListNode(0);
        ListNode* realans = ans;
        
        for(int i=0;i<v.size();i++){
            ListNode* tmp = new ListNode(v[i]);
            ans->next = tmp;
            ans = ans->next;
        }
        return realans->next;
    }
};