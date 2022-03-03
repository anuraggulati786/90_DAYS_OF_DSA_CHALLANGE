// doubly linked list implementation 
// traversing and printing with help of head
// traversing and printing with help of tail
// insert at tail
// insert at in between 
// deletion of first node 
// search in a singly linkedlist
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node {
	public :
		int data;
		node* next;
		node* prev;
	// parameterised constructor 
	node(int value) {
		this -> data = value;
		this -> next = NULL;
		this -> prev = NULL;
	}
		
};

void print_DLL_byHead(node* head) {
	node* temp = head;
	
	while(temp != NULL) {
		cout<< temp -> data <<" ";
		temp = temp -> next;
	}
	cout<<endl;
}


void print_DLL_byTail(node* tail) {
	node* temp = tail;
	
	while(temp != NULL) {
		cout<<temp -> data <<" ";
		temp = temp -> prev;
	}
	cout<<endl;
}

int main() { 
      
      node*  node1 = new node(10);
      node* head = node1; // head hai ye DLL ka ...
      node* node2 = new node(20);
      node* node3 = new node(30);
      node* node4 = new node(100);
      node* tail = node4;//tail hai ye DLL ka...
      
      // pointers point kara dia hain... sahi se node1 -> prev NULL  or node4 -> next NULL hai ..
      node1 -> next = node2;
      node2 -> next = node3;
      node2 -> prev = node1;
      node3 -> next = node4;
      node3 -> prev = node2;
      node4 -> prev = node3;
    // travesring and printing ....
	  print_DLL_byHead(head);
      print_DLL_byTail(tail);
      
}
