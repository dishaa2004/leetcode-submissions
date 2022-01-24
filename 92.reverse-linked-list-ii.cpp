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
    vector<int> v;
    ListNode* reverseBetween(ListNode* head, int left, int right) {
         ios_base::sync_with_stdio(false), cin.tie(nullptr),cout.tie(nullptr);
        while(head != NULL){
            v.push_back(head->val);
            head = head->next;
        }
        reverse(v.begin()+left-1,v.begin()+right);
        
        ListNode* ans = new ListNode(0);
        ListNode* reqd = ans;
        int x = v.size();
        for(int i=0;i<v.size();i++)
        {
            ListNode* tmp = new ListNode(v[i]);
            ans ->next = tmp;
            ans = ans ->next;
        }
        return reqd->next;
    }
};