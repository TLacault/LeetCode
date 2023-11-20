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
    ListNode* middleNode(ListNode* head) {
        ListNode *first = head;
        ListNode *second = head;
        while (second != NULL) {
            second = second->next;
            if (second == NULL) return first;
            second = second->next;
            first = first->next;
        }
        return first;
    }
};