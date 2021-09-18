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
    bool valid(TreeNode* node, bool l, long long int max, long long min){
        
        if(!node)
            return true;
        
            if((long long) node->val >= max ||(long long) node->val <= min)
                return false;
            
            return valid(node->left, 1, node->val, min) and valid(node->right, 0, max, node->val);
       
    }
public:
    bool isValidBST(TreeNode* root) {
        long long int mine = INT_MIN;
        long long int maxe= INT_MAX;
        mine--;
        maxe++;
        return valid(root->left, 1, root->val, mine) and valid(root->right, 0, maxe, root->val);
        
    }
};