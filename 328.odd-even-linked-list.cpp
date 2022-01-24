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
    ListNode* oddEvenList(ListNode* head) {
        vector<pair<int,int>> vp;
        int i = 1;
        while(head){
            vp.push_back({head->val,i++});
            head = head->next;
        }
        
        vector<int> f;
        for(auto &k : vp){
            if(k.second&1){
                f.push_back(k.first);
            }
        }
        for(auto &k : vp){
            if(!(k.second&1)){
                f.push_back(k.first);
            }
        }
        
        for(auto &k : f) cout << k << " ";
        
        
        ListNode* a = new ListNode(0);
        ListNode* ans = a;
        
        for(auto &k : f){
            ListNode* cur = new ListNode(k);
            a->next = cur; a = a->next;
        }
        
        return ans->next;
    }
};