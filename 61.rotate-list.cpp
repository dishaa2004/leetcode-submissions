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
    ListNode* rotateRight(ListNode* head, int k) {
        ios_base::sync_with_stdio(false), cin.tie(nullptr);
        if(head == NULL) return head;
        ListNode* last = head;int size = 0;
        while(last->next != NULL)
        {
            size ++;
            last = last ->next;
        }
        size++;
        // cout<<size<<endl;
        // cout<<last->val<<endl;
        last->next = head;
        ListNode* t1 = head;int sz=0;ListNode* ans; k=k%size;
        while(t1 != NULL){
            sz++;
            if(sz == size - k)
            {
                ans = t1->next;
                break;
            }
            t1 = t1->next;
        }
        t1->next = NULL;
        
        return ans;
    }
};