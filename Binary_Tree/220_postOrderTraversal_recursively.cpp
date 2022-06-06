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
    
     void postorderHelper(TreeNode* root , vector<int>& postorderNodes) {
        
        if(root == NULL) {
            return;
        }
        postorderHelper(root -> left,postorderNodes);
        postorderHelper(root -> right,postorderNodes);
        postorderNodes.push_back(root -> val);
                
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> postorderNodes;
        
        postorderHelper(root,postorderNodes);
        
        return postorderNodes;
                
    }
};
