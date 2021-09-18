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
    vector<int> helper(TreeNode* root, vector<int> v)
    {
        if(root){
            v = helper(root->left, v);
            v.push_back(root->val);
            v = helper(root->right, v);
            return v;
            
            }
        else
            return v;
    }
    
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> in;
        return helper(root, in);
        
    }
};