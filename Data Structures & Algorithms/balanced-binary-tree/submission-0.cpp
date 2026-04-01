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
    bool isBalanced(TreeNode* root) {
        if(!root){
            return true;
        }
        int left_height = height(root->left);
        cout << left_height << " ";
        int right_height = height(root->right);
        cout << right_height << " ";
        cout << endl;

        return (abs(left_height-right_height) <= 1 && isBalanced(root->left) && isBalanced(root->right));
    }

    int height(TreeNode* root){
        if(!root) return 0;
        int left_height = height(root->left);
        int right_height = height(root->right);

        return 1+max(left_height,right_height);
    }
};
