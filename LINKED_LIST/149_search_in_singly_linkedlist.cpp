// search in a singly linkedlist
#include<iostream>
#include<bits/stdc++.h>
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
	
	~node() {
		int value = this -> data;
		if(this -> next != NULL) {
			delete next ;
			this -> next = NULL;
		}
	}
		
};


int search_in_a_singly_linked_list(node* head , int val) {
	node* temp = head;
	
	while(temp != NULL) {
		if(temp -> data == val) {
			return 1;
		}
		else {
			temp = temp -> next;
		}
	}
	return -1;
}


int main() { 
      
      node*  node1 = new node(10);
      node* head = node1;
    
      node* node2 = new node(20);
      node* node3 = new node(30);
      node* node4 = new node(40);
      
      node1 -> next = node2;
      node2 -> next = node3;
      node3 -> next = node4;
      
      int val;
      cout<<"enter the value want to search :"<<endl;
	  cin>>val;
	  if(search_in_a_singly_linked_list(head,val) == 1 ){
	  	cout<<"Element found in a linked list :"<<endl;
	  }
	  else {
	  	cout<<"Element not found !!:"<<endl;
	  }
	  
      
      
}
