class Solution {
public:
    ListNode* mid_node(ListNode* head) {
        ListNode* fast = head, *slow = head;
        while(fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    void reorderList(ListNode* head) {
        if(!head->next) return;
        stack<ListNode*> st;
        ListNode *ans = head;
        ListNode* mid = mid_node(head);
        // cout << mid->val << endl;
        while(mid) {
            st.push(mid);
            mid = mid->next;
        }
        
        while(!st.empty()) {
            ListNode* new_next = st.top();
            st.pop();
            
            if(head != new_next) {
                new_next->next = head->next;
                head->next = new_next;
                head = new_next->next;
            } else {
                head->next = nullptr;
            }
        }
        if(head = head->next) head->next = nullptr;
    }
};