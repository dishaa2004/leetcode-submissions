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
        if(head == NULL || head->next == NULL){
            return head;
        }
        vector<int> v;
        while(head != NULL){
            v.push_back(head->val);
            head = head->next;
        }
        if(v.size()%2 == 0){
        for(int i=0;i<v.size();i+=2){
            swap(v[i],v[i+1]);
        }
        }else{
            for(int i=0;i<v.size()-1;i+=2){
            swap(v[i],v[i+1]);
        }
        }
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }
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