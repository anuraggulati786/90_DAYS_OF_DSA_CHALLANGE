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
    
    void helper(TreeNode* root, vector<int>& preorderElements) {
        
        if(root != NULL) {
                  
        preorderElements.push_back(root -> val);
        helper(root -> left , preorderElements);
        helper(root -> right , preorderElements);
        }
        
        return;
    }
    
    
    
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> preorderElements;
        
        helper(root , preorderElements);
        
        
        return preorderElements;
        
    }
};
