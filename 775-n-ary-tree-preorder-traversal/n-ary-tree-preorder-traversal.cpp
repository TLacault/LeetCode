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

    void pre(Node *root) {
        if (!root) return;
        for (auto i : root->children) {
            order.emplace_back(i->val);
            pre(i);
        }
    }

    vector<int> preorder(Node* root) {
        if (!root) return order;
        order.emplace_back(root->val);
        pre(root);
        return order;
    }
};