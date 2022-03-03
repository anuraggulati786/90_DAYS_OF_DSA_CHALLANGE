// insert at head in DLL...
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

void insert_at_head(node* &head , int d) {
    
	if(head == NULL) {
		node* temp = new node(d);
		head = temp;
	}
	
	// new node temp is created that u want to insert..
    node* temp1 = new node(d);
    
    temp1 -> next = head;
    head -> prev = temp1;
    
    // head to first node par lana padega na..
    head = temp1;
}

int main() { 
      
      node*  node1 = new node(10);
      node* head = node1; // head hai ye DLL ka ...
      
	  print_DLL_byHead(head);
	  insert_at_head(head , 20);
	  print_DLL_byHead(head);

      
}
