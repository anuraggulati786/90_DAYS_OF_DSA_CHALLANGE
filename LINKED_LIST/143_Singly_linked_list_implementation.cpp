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

int main() { 
      
      node* head = new node(10);
      node* node1 = new node(12);
      node* node2 = new node(15);
      head -> next = node1;
      node1 -> next = node2;
      cout<< head -> data<<" ";
      cout<< head -> data <<" ";
      cout<< node2 -> data <<" ";
}
