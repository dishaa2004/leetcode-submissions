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
        
        if(lists.size() == 0){
            return NULL;
        }
        
        if(lists.size() == 1){
            
            ListNode* a = new ListNode(0);
            ListNode* ans = a;
            
            while(lists[0] != NULL){
                ListNode* cur = new ListNode(lists[0]->val);
                lists[0] = lists[0]->next;
                a->next = cur; a = a->next;
            }
            return ans->next;
        }
        
        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;
    
        for(int i=0;i<lists.size();i++){
            if(lists[i] != NULL){
                pq.push({lists[i]->val,i});
                lists[i] = lists[i]->next;
            }
            
        }
        
        ListNode* a = new ListNode(0);
        ListNode* ans = a;
        
        while(pq.size()){
            pair<int,int> cur = pq.top();
            pq.pop();
            
            if(lists[cur.second] != NULL){
                pq.push({lists[cur.second]->val, cur.second});
                lists[cur.second] = lists[cur.second]->next;
            }
            
            ListNode* curval = new ListNode(cur.first);
            a->next = curval;
            a = a->next;
        }
        
        return ans->next;
    }
};