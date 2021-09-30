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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> sol;
        queue<TreeNode*> gq;
        if(!root)
            return sol;
        
        gq.push(root);
        vector<int> lv;
        TreeNode* temp;
        while(gq.size())
        {
            int lq = gq.size();
            for(int i = 0; i < lq; i++)
            {
                temp = gq.front();
                gq.pop();
                lv.push_back(temp->val);
                if(temp->left) gq.push(temp->left);
                if(temp->right) gq.push(temp->right);
                
            }
            sol.push_back(lv);
            lv.clear();
        }
        return sol;
        
        
    }
};