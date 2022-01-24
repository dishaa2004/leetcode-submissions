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
    int getDecimalValue(ListNode* n) {
        string s="";
        while (n != NULL) {
        s.push_back(n->val+'0');
        n = n->next;
    }
        int decimal = stoi(s, 0, 2);
        return decimal;
    }
};