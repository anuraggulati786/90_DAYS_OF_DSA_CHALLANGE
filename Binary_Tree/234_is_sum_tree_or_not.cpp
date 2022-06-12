// C++ program to check if Binary tree
// is sum tree or not
#include <iostream>
using namespace std;

// A binary tree node has data,
// left child and right child
struct node
{
	int data;
	struct node* left;
	struct node* right;
};

// A utility function to get the sum
// of values in tree with root as root
int sum(struct node *root)
{
	if (root == NULL)
		return 0;
	
	return sum(root->left) + root->data +
		sum(root->right);
}

// Returns 1 if sum property holds for
// the given node and both of its children
int isSumTree(struct node* node)
{
	int ls, rs;

	// If node is NULL or it's a leaf
	// node then return true
	if (node == NULL ||
	(node->left == NULL &&
		node->right == NULL))
		return 1;

// Get sum of nodes in left and
// right subtrees
ls = sum(node->left);
rs = sum(node->right);

// If the node and both of its
// children satisfy the property
// return 1 else 0
	if ((node->data == ls + rs) &&
		isSumTree(node->left) &&
		isSumTree(node->right))
		return 1;

return 0;
}





//***********OPTAMIZED O(N) SOLUTION>>>>>>>>>>>>>>???????????????????...............


int isLeaf(node *node)
{
    if(node == NULL)
        return 0;
    if(node->left == NULL && node->right == NULL)
        return 1;
    return 0;
}
 
/* returns data if SumTree property holds for the given
    tree else return -1*/
int isSumTree(node* node)
{
    if(node == NULL)
    return 0;
     
    int ls; // for sum of nodes in left subtree
    int rs; // for sum of nodes in right subtree
     
     
    ls = isSumTree(node->left);
    if(ls == -1)            // To stop for further traversal of tree if found not sumTree
    return -1;
     
    rs = isSumTree(node->right);
    if(rs == -1)            // To stop for further traversal of tree if found not sumTree
    return -1;
     
     
    if(isLeaf(node) || ls + rs == node->data)
    return ls + rs + node->data;
    else
    return -1;
  
}


















// Helper function that allocates a new node
// with the given data and NULL left and right
// pointers.
struct node* newNode(int data)
{
	struct node* node = (struct node*)malloc(
		sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return(node);
}

// Driver code
int main()
{
	struct node *root = newNode(26);
	root->left = newNode(10);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(6);
	root->right->right = newNode(3);
	
	if (isSumTree(root))
		cout << "The given tree is a SumTree ";
	else
		cout << "The given tree is not a SumTree ";

	getchar();
	return 0;
}

// This code is contributed by khushboogoyal499

