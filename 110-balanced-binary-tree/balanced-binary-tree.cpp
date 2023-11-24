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
    int depth(TreeNode* root) {
        if (!root) return 0;
        return 1 + max(depth(root->left), depth(root->right)); 
    }

    bool isBalanced(TreeNode* root) {
        if (!root) return true;
        int depth_left = depth(root->left);
        int depth_right = depth(root->right);
        if (depth_left > depth_right + 1 || depth_left < depth_right - 1) return false;
        return (isBalanced(root->left) && isBalanced(root->right));
    }
};