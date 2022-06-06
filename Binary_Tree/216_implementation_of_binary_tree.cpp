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
		this -> left = NULL;
		this -> right = NULL;
	}	
					
};

int main() {
	
	cout << " enter the data of the root node " << endl;
	int data;
	cin >> data;
	
	node* root = new node(data);
	
	root -> left  = new node(11);
	
	root -> right = new node(12);
	
	root -> right -> left = new node(13);
	
}
