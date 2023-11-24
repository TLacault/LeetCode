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
        if (!root && !subRoot) return true;
        if (!root && subRoot) return false;
        if (root && !subRoot) return false;
        if (root->val != subRoot->val) return false;
        return is_sub(root->left, subRoot->left) && is_sub(root->right, subRoot->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root) return false;

        if (root->val == subRoot->val)
            if (is_sub(root, subRoot)) return true;
        
        if (isSubtree(root->left, subRoot)) return true;
        if (isSubtree(root->right, subRoot)) return true;
        return false;
    }
};