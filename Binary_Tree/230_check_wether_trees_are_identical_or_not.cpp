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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if(p == NULL || q == NULL) {
            return (p == q);
        }
        // we did this using preorder traversal can also do via in order and postroderas well...
        return (p -> val == q -> val)&&(isSameTree(p -> left , q -> left))&&(isSameTree(p -> right , q -> right));
    }
};
