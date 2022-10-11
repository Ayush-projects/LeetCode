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
        vector<int> level;
        if(root==NULL)
        {
            return sol;
        }
        queue<TreeNode *> tree, nodes;
        tree.push(root);
        while(!tree.empty())
        {
            TreeNode *temp = tree.front();
            tree.pop();
            if(temp->left)
            {
                nodes.push(temp->left);
                
            }
            if(temp->right)
            {
                nodes.push(temp->right);
            }
            level.push_back(temp->val);
            
            if(tree.empty())
            {  
                tree.swap(nodes);
                sol.push_back(level);
                level.clear();
            }
            
        }
        return sol;
       
    }
};