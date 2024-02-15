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
    bool hasPath(TreeNode* root, int targetSum, int sum) {
        if (!root) return false;
        sum += root->val;
        if (!root->left && !root->right && sum == targetSum) return true;

        return hasPath(root->left, targetSum, sum) || hasPath(root->right, targetSum, sum);
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        return hasPath(root, targetSum, 0);
    }
};