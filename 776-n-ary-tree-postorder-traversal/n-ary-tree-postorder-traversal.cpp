/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> order;

    void post(Node *root) {
        if (!root) return;
        for (auto i : root->children) {
            post(i);
            order.emplace_back(i->val);
        }
    }

    vector<int> postorder(Node* root) {
        if (!root) return order;
        post(root);
        order.emplace_back(root->val);
        return order;
    }
};