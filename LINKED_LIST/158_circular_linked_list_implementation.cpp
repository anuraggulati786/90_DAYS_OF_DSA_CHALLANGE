// circular linked list implementation ...
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node {
	public :
		int data;
		node* next;
	// parameterised constructor...
	node(int value) {
		this -> data = value;
		this -> next = NULL;
  }
	// destructor...
	~node() {
		int val = this -> data;
        if(this -> next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<< val << endl;
	}
		
};

void print_CLL_byHead(node* head) {
	node* temp = head;
	cout<<temp -> data <<" ";
	for(temp = temp -> next ; temp != head; temp = temp -> next) {
		cout<<temp -> data <<" ";
	}
	cout<<endl;
}

int main() { 
      
      node*  node1 = new node(10);
      node* head = node1;
      node*  node2 = new node(20);
      node*  node3 = new node(30);
      node*  node4 = new node(40);
      node*  node5 = new node(50);
      
      node1 -> next = node2;
      node2 -> next = node3;
      node3 -> next = node4;
      node4 -> next = node5;
      node5 -> next = node1;
	  
      print_CLL_byHead(head);
      
}
