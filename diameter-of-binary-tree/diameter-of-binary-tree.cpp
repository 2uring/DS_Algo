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
    int D = 0;
    int helper(TreeNode* root)
    {
        int ld = 0;
        int rd = 0;
        if(!root)
            return 0;
        

        ld = helper(root->left);
        rd = helper(root->right);
        
        D = max(D, ld+rd);
        return max(ld+1, rd+1);
    }
        
public:
    int diameterOfBinaryTree(TreeNode* root) {
        helper(root);
        return D;
    }
};