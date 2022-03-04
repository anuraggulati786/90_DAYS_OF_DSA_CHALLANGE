// deletion of last node in DLL...
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node {
	public :
		int data;
		node* next;
		node* prev;
	// parameterised constructor...
	node(int value) {
		this -> data = value;
		this -> next = NULL;
		this -> prev = NULL;
	}
	// destructor...
	~node() {
		int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<< val << endl;
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

void delete_last_in_DLL(node* &tail) {

	node* curr = tail;
	
	curr -> prev -> next = NULL;
	// last ko update kardo ab
	tail = curr -> prev;
	curr -> prev = NULL;
	// memory curr delete kardo
	delete curr;
	
}


int main() { 
      
      node*  node1 = new node(10);
      node* head = node1; // head hai ye DLL ka ...
      node* tail = node1; // tail hai ye DLL ka...
      
	  print_DLL_byHead(head);
	  insert_at_head(head , 20);
	  print_DLL_byHead(head);
	  insert_at_head(head , 30);
      print_DLL_byHead(head);
      insert_at_head(head , 40);
      print_DLL_byHead(head);
      // deleting last node.....
      delete_last_in_DLL(tail);
      print_DLL_byHead(head);
      cout<<"tail is at "<<tail -> data<<endl;
      
}
