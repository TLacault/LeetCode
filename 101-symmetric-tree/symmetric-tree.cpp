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
    bool is_sym(TreeNode* left, TreeNode* right) {
        if (!left && !right) return true;
        if(!left && right || left && !right) return false;
        if (left->val == right->val)
            return is_sym(left->right, right->left) && is_sym(left->left, right->right);
        return false;
    }

    bool isSymmetric(TreeNode* root) {
        return is_sym(root->left, root->right);
    }
};