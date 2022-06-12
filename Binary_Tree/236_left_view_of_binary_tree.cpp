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


//      ********************recursive code ******************
public:
    
    void solve(TreeNode* root , vector<int>& result, int level) {
        
        if(root == NULL) {
            return;
        }
        
        if(level == result.size()) {
            result.push_back(root -> val);
        }
        
        solve(root -> right , result, level+1);
        solve(root -> left  ,  result, level+1);
        
    }
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int> result;
        solve(root,result,0);
        return result;
      
    }
};




//*****************ITERATIVE*****************


vector<int> leftView(Node *root)
{
    vector<int> result;
        if(root == NULL) {
            return result;
        }
       
        queue<Node*> q;
        q.push(root);
       
        while(q.empty() == false)  {
            
            int size = q.size();
            
            for(int i=0; i<size; i++) {
                
                Node* curr = q.front();
                q.pop();
                
                if(i == 0) {
                    result.push_back(curr -> data);
                }
                
                if(curr -> left != NULL) {
                    q.push(curr -> left);
                }
                if(curr -> right != NULL) {
                    q.push(curr -> right);
                }
                
            }
            
        }
        
      return result;   
}
