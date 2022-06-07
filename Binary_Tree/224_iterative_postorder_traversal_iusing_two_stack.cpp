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
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> postorderNodes;
        if(root == NULL) {
            return postorderNodes;
        }
        
        stack<TreeNode*> st1,st2;
        st1.push(root);
        
        while(st1.empty() == false) {
            
            root = st1.top();
            st1.pop();
            st2.push(root);
            
            if(root -> left != NULL) {
                st1.push(root -> left);
            }
            if(root -> right != NULL) {
                st1.push(root -> right);
            }
            
        }
        
        while(st2.empty() == false) {
            int value = st2.top() -> val;
            postorderNodes.push_back(value);
            st2.pop();
        }
        
        return postorderNodes;
    }
};
