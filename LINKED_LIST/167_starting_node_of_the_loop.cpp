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

node* Floyds_cycle_detection_algo(node* head) {
	
	if(head == NULL) {
		return NULL;
	}
	
	node* slow = head;
	node* fast = head;
	while(fast != NULL && slow != NULL) {
              fast = fast -> next;
              // condition to check must check the current is not null then only move ahead other wise we get segementation fault;
              if( fast != NULL) {
              	fast = fast -> next;
			  }
			  slow = slow -> next;
			  if(fast == slow) {
			  	return slow ;
			  }
	}
	// no cycle present...
	return NULL;
}

node* starting_node_of_the_loop(node* head) {
	
	  node* intersection = Floyds_cycle_detection_algo(head);
      
      node* slow = head;
      
      while(slow != intersection) {
      	slow = slow -> next;
      	intersection = intersection -> next;
	  }
	  
	  return slow;
}

int main() { 
      
      node* head = new node(10);
      node* node1 = new node(12);
      node* node2 = new node(15);
      head -> next = node1;
      node1 -> next = node2;
      node2 -> next = head -> next;
      
      node* start = starting_node_of_the_loop(head);
	  cout<<"Stsrting node of the loop is = : "<<start -> data <<endl;
	  
}
