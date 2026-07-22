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
class BSTIterator {
private:
    stack<TreeNode*> st;
    bool reverse = false;
    void push(TreeNode* root) {
        while (root != nullptr) {
            st.push(root);
            root = !reverse ? root->left : root->right;
        }
    }
public:
    BSTIterator(TreeNode* root, bool reverse = false) : reverse(reverse) {
        push(root);
    }
    int next() {
        TreeNode* top = st.top(); st.pop();
        push(!reverse ? top->right : top->left);
        return top->val;
    }
};
*/
class Solution {
public:
    unordered_set<int> st;
    bool dfs(TreeNode* root, int k) {
        if (!root) return false;
        if (st.count(k - root->val))
            return true;
        st.insert(root->val);
        return dfs(root->left, k) || dfs(root->right, k);
    }
    bool findTarget(TreeNode* root, int k) {
        return dfs(root, k);
    }
};