/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *turtle = head;
        ListNode *hare = head;
        while (turtle != NULL && hare != NULL) {
            turtle = turtle->next;
            hare = hare->next;
            if (!hare) return false;
            hare = hare->next;
            if (turtle == hare) return true;
        }
        return false;
    }
};