#include<iostream>
#include<unordered_set>
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

void print_list(node* head) {
	node* curr = head;
	while(curr != NULL) {
		cout<<curr -> data <<" ";
		curr = curr -> next;
	}
	cout<<endl;
}

void reverse_a_linked_list(node* head ) {
	
	if(head == NULL) {
		return;
	}
	node* rest_head = reverse_a_linked_list(head -> next);
	node* rest_tail = head -> next;
	rest_tail -> next = head;
	head -> next = NULL;
	head = rest_head;
}


int main() { 
      
      node* head = new node(10);
      node* node1 = new node(15);
      node* node2 = new node(10);
      node* node3 = new node(16);
      node* node4 = new node(15);
      head  -> next = node1;
      node1 -> next = node2;
      node2 -> next = node3;
      node3 -> next = node4;
      reverse_a_linked_list(head);
      print_list(head);
      return 0;
}
