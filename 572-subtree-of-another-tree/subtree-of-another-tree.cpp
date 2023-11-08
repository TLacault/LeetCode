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
    bool is_sub(TreeNode* root, TreeNode* subRoot) {
        if (!root && subRoot != NULL) return false;
        if (root != NULL && !subRoot) return false;
        if (!root && !subRoot) return true;
        
        if (root->val == subRoot->val)
            return (is_sub(root->left, subRoot->left) && is_sub(root->right, subRoot->right));

        return false;

    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root) return false;

        if (root->val == subRoot->val)
            if (is_sub(root, subRoot)) return true;

        return (isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot));
    }
};