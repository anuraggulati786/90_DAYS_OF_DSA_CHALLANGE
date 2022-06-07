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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorderNodes;
        
        // check if root is empty if it is return vector
        if(root == NULL) return preorderNodes;
        
        // now we build our stack
        stack<TreeNode*> st;
        st.push(root);
        
        while(st.empty() == false) {
            root = st.top();
            st.pop();
            preorderNodes.push_back(root -> val);
            
            if(root -> right != NULL) {
                st.push(root -> right);
            }
            if(root -> left != NULL) {
                st.push(root -> left);
            }
        }
        
        return preorderNodes;
    }
};
