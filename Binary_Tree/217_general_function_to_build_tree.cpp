#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node {
	
	public :
		int data;
		node* left;
		node* right;
		
	node(int val) {
		this -> data = val;
		left = NULL;
		right = NULL;
		
	}	
};

node* buildTree(node* root) {
	
	cout << "enter the data of root node :" << endl;
	int data;
	cin>>data;
	
	root = new node(data);
	
	if(data == -1) {
		return NULL;
	}
	
	cout << "enter the data for left node :" << data << endl;
	root -> left = buildTree(root -> left);
	cout << "enter the data for right node :" << data << endl;
	root -> right = buildTree(root -> right);
	return root ;
}


int main() {
	
	node* root = NULL;
	
	buildTree(root); 
	 
}
