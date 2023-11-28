/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> order;

    void post(TreeNode *root) {
        if (!root) return;
        post(root->left);
        post(root->right);
        order.emplace_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        if (!root) return order;
        post(root);
        return order;
    }
};