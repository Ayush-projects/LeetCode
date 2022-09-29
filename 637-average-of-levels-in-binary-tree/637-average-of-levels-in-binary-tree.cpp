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
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<double> v;
        if(root==NULL){return v;}
        queue<TreeNode*> q;
        q.push(root);
        
       
        
        while(!q.empty())
        {
            double sum = 0;
            int s = q.size();
            
            
            
            for(int i=0; i<s; i++)
            {
                TreeNode *temp = q.front();
                q.pop();
                if(temp->left) {q.push(temp->left);}
                if(temp->right) {q.push(temp->right);}
                
                sum += temp->val;
                
            }
            v.push_back((sum*1.0)/s);
        }
        
        
        return v;
      
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};