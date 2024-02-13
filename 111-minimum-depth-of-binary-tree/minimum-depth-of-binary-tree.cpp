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
    int min = 0;
    bool first = true;
    int current = 1;

    int minDepth(TreeNode* root) {
        if (!root) return min;
        // cout << root->val << " | " << current << endl;
        if (!root->left && !root->right) {
            if (first) {
                min = current;
                first = false;
            } else
                min = (current < min) ? current : min;
            return current;
        }
        current++;
        minDepth(root->left);
        minDepth(root->right);
        current--;
        return min;
    }
};