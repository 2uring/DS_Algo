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
   vector <TreeNode*> helper(TreeNode*  root, vector <TreeNode*> v)
   {
       if(!root)
           return v;
       else
       {
           v = helper(root->left, v);
           v.push_back(root);
           v = helper(root->right, v);
           return v;
       }
   }
        
   
  
public:
    void recoverTree(TreeNode* root) {
        vector <TreeNode*> vin;
        
        vin = helper(root, vin);
        
        TreeNode* p1 = NULL;
        TreeNode* p2 = NULL;
        for(int i = 0; i<vin.size()-1; i++)
        {
            if(vin[i]->val >vin[i+1]->val)
            {
                if(p1 == NULL)
                {
                    p1 = vin[i];
                    p2 = vin[i+1];
                }
                else
                    p2 = vin[i+1];
            }
        }
        
        int temp = p2->val;
        p2->val = p1->val;
        p1->val = temp;
        
        
    }
};