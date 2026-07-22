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
    int preIdx = 0;
    TreeNode* buildTree(vector<int>& preorder, int minval, int maxval) {
        if (preIdx == preorder.size()) return NULL;
        int rootVal = preorder[preIdx];
        if (rootVal < minval || rootVal > maxval) return NULL;
        preIdx++;
        TreeNode* root = new TreeNode(rootVal);
        root->left = buildTree(preorder, minval, rootVal);
        root->right = buildTree(preorder, rootVal, maxval);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return buildTree(preorder, INT_MIN, INT_MAX);
    }
};