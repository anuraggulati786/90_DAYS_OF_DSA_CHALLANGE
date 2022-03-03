// insert in between in DLL...
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
    // new node temp is created that u want to insert..
    node* temp = new node(d);
    
    tail -> next = temp;
    temp -> prev = tail;
    
    // head to first node par lana padega na..
    tail = temp;
}

void insert_at_head(node* &head , int d) {
    // new node temp is created that u want to insert..
    node* temp1 = new node(d);
    
    temp1 -> next = head;
    head -> prev = temp1;
    
    // head to first node par lana padega na..
    head = temp1;
}

void insert_at_given_position(node* &head , node* &tail, int d , int pos) {
	
	int cnt = 1;
	// case 1 when position is 1
	 if(pos == 1) {
	 	insert_at_head(head , d);
	 	return;
	 }
	
	//create node 
	node* temp = new node(d);
	
	// insert at tail we need tail reference so for this ...
	while(cnt < pos - 1) {
		temp = temp -> next;
		cnt++;
	}
	
	if(temp -> next == NULL) {
		insert_at_tail(tail , d);
		return;
	} 
	// in between 
	node* node_to_insert = new node(d);
	node_to_insert -> next = temp -> next;
	temp -> next -> prev = node_to_insert;
	temp -> next = node_to_insert;
	node_to_insert -> prev = temp;
	
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
      
      int pos;
      cout<<"enter the position :"<<endl;
      cin>>pos;
      int val ;
      cout<<"enter the value :"<<endl;
      cin>>val;
      insert_at_given_position(head ,tail,val,pos);
      print_DLL_byHead(head);
      
}
