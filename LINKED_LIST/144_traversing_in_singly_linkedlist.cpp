#include<iostream>
using namespace std;

class node {
	public :
		int data;
		node *next;
	// parameterised constructor 
	node(int value) {
		this -> data = value;
		this -> next = NULL;
	}	
};

void traverse(node* &head) {
	node* temp = head;
	while(temp != NULL) {
		cout<<temp -> data<<" ";
		temp = temp -> next;
	}
	cout<<endl;
}

int main() { 
      
      node* head = new node(10);
      node* node1 = new node(12);
      node* node2 = new node(15);
      node* node3 = new node(19); 
      head -> next = node3;
      node3 -> next = node2;
      node2 -> next = node1;
      // travesrse call..
	  traverse(head);
      
}
