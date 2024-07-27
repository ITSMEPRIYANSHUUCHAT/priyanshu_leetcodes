/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {

        if (root == nullptr) {

            return vector<int>();
        }
        vector<TreeNode*> storer = {root};
        vector<int> outwa;
        while (!storer.empty()) {
            root = storer.back();
            storer.pop_back();
            if (root != nullptr) {
                outwa.push_back(root->val);

                if (root->right != nullptr) {
                    storer.push_back(root->right);
                }
                if (root->left != nullptr) {
                    storer.push_back(root->left);
                }
            }
        }

        return outwa;
    }
};