#include<iostream>
using namespace std;
// yaha par sirf heap memory mai 3 node create ki hai jo ki kahi bhi poin t nhi kar rhi hai .....ese he dali hui hai bas ....
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

void remove_duplicates(node* head) {
	
	node* temp = head;
	if(head == NULL) {
		return;
	}

 	
 	while(temp -> next != NULL) {
 		node* next = temp -> next;
 		if(temp -> data == next -> data ) {
 			temp -> next = next -> next;
 			next = temp -> next;
		 }
		 temp = temp->next;
	 }	
}

int main() { 
      
      node* head = new node(10);
      node* node1 = new node(15);
      node* node2 = new node(15);
      node* node3 = new node(16);
      head -> next = node1;
      node1 -> next = node2;
      node2 -> next = node3;
      cout<<"Before list :"<<endl;
      print_list(head);
      remove_duplicates(head);
      cout<<endl;
      cout<<"After removal of duplicates :"<<endl;
      print_list(head);
}
