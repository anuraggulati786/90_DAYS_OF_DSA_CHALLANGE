#include<iostream>
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

node* insert_at_head(node* &head , int d) {
	node* temp = new node(d);
	temp -> next = head;
	head = temp;
	
}
void print(node* head) {
	node* curr = head;
	while(curr != NULL) {
		cout<<curr -> data <<" ";
		curr = curr -> next;
	}
	cout<<endl;
}

int main() { 
      
      node*  node1 = new node(10);
      node* head = node1;
    
      insert_at_head(head , 20);
      print(head);
      
      insert_at_head(head , 30);
      print(head);
      
      insert_at_head(head , 40);
      print(head);
      
      insert_at_head(head , 50);
      print(head);
      
}
