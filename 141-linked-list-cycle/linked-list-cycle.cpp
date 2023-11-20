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
        map<ListNode *, ListNode *> m;
        ListNode *temp = head;
        while (temp != NULL) {
            if (m.contains(temp)) return true;
            m[temp] = temp;
            temp = temp->next;
        }
        return false;
    }
};