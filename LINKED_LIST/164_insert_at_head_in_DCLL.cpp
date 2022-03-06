// doubly linked list implementation 
// traversing and printing with help of head
// traversing and printing with help of tail
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
	cout<<head -> data <<" ";
	for(node* p = head -> next; p != head; p = p -> next) {
		cout<< p -> data <<" ";
	}
	cout<<endl;
}


void insert_at_head_in_CDLL(node* &head , int d) {
	node* temp = new node(d);
	temp -> prev = head -> prev ;
	temp -> next = head;
	head -> prev -> next = temp;
	head -> prev = temp;
	head = temp; 
}

int main() { 
      
      node*  node1 = new node(10);
      node* head = node1; // head hai ye DLL ka ...
      node* node2 = new node(20);
      node* node3 = new node(30);
      node* node4 = new node(100);
      node* node5 = new node(1001);
      node* tail = node5;//tail hai ye DLL ka...
      
      // pointers point kara dia hain... sahi se node1 -> prev NULL  or node4 -> next NULL hai ..
      node1 -> next = node2;
      node1 -> prev = node5;
      node2 -> next = node3;
      node2 -> prev = node1;
      node3 -> next = node4;
      node3 -> prev = node2;
      node4 -> prev = node3;
      node4 -> next = node5;
      node5 -> next = node1;
      node5 -> prev = node4;
      insert_at_head_in_CDLL(head , 99);
    // travesring and printing ....
	  print_DLL_byHead(head);
   // print_DLL_byTail(tail , head);
    cout<<"tail"<<tail -> data<<endl;
    cout<<"head is at "<< head -> data <<endl;
      
}
