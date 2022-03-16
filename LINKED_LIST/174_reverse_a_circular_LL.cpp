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
	while(curr -> next != head) {
		cout<<curr -> data <<" ";
		curr = curr -> next;
	}
	cout<<endl;
}

void reverse_a_circular_linked_list(node* head) {
	
	if(head == NULL) {
		return;
	}
	node* curr = head;
	node* next = NULL;
	node* prev = NULL;
	while(curr  != head) {
		next = curr -> next;
		curr -> next = prev;
		prev = curr;
		curr = next;
	}
	head -> next = prev;
	head = prev;
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
      node4 -> next = head;
      reverse_a_circular_linked_list(head);
      print_list(head);
      return 0;
}
