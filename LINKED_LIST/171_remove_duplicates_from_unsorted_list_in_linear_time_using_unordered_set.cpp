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
}

void remove_Duplicates(node* start)
{
	// Hash to store seen values
	unordered_set<int> seen;

	/* Pick elements one by one */
    node* curr = start;
	node* prev = NULL;
	while (curr != NULL) {
		// If current value is seen before
		if (seen.find(curr -> data) != seen.end()) {
			prev->next = curr->next;
			delete (curr);
		}
		else {
			seen.insert(curr->data);
			prev = curr;
		}
		curr = prev->next;
	}
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
      cout<<"Before list :"<<endl;
      print_list(head);
      cout<<"\nAfter removal of duplicates :"<<endl;      
      
      cout<<"Optimal solution using the unordered_set  :"<<endl;
      remove_Duplicates(head);
      print_list(head);
      return 0;
}
