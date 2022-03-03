// insert at tail in DLL...
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

void insert_at_tail(node* &tail , int d) {
    
	if(tail == NULL) {
		node* temp = new node(d);
		tail = temp;
	}
	
	// new node temp is created that u want to insert..
    node* temp = new node(d);
    
    tail -> next = temp;
    temp -> prev = tail;
    
    // head to first node par lana padega na..
    tail = temp;
}

int main() { 
      
      node*  node1 = new node(10);
      node* head = node1; // head hai ye DLL ka ...
      node* tail = node1; // tail hai ye DLL ka...
      
	  print_DLL_byHead(head);
	  insert_at_tail(tail , 20);
	  print_DLL_byHead(head);

      
}
