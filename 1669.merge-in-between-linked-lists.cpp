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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp1 = list1;a--;
        ListNode* temp2 = list1;
        ListNode* end2 = list2;ListNode* end22 = list2;int k = -1;
        while(end2 != NULL){
            k++;
            end2 = end2->next;
        }
        while(k--){
            end22 = end22->next;
        }
        
        while(a--){
            temp1 = temp1->next;
        }
        while(b--){
            temp2 = temp2->next;
        }
        
        // cout<<temp1->val<<" "<<temp2->val<<endl;
        temp1->next = list2;
        end22->next = temp2->next;
        
        return list1;
    }
};