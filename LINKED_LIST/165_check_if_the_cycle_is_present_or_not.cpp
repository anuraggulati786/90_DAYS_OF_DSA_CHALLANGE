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

bool detect_cycle(node* head) {
	
	if(head == NULL) {
		return fasle;
	}
	
	node* curr = head;
	map<node*,bool> visited;
	while(curr != NULL) {
		// jab cycle present hogi..
		if(visited[curr] == true) {
			return true;
		}
		// we mark the node as true we already visit this node earlier...
		visted[curr] = true;
		curr = curr -> next;
	}
	// no cycle present...
	return false;
}


int main() { 
      
      node* head = new node(10);
      node* node1 = new node(12);
      node* node2 = new node(15);
      head -> next = node1;
      node1 -> next = node2;
      node2 -> next = head -> next;
      
      if(detect_cycle(head)) {
      	cout<<"Cycle is Present :"<<endl;
	  }
	  else {
	  	cout<<"Cycle is not present :"<<endl;
	  }
}
