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

void insert_at_head(node* &head , int d) {
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


void insert_at_given_position(node* &head , int pos , int d) {
	
	// handling the corner case ...
	// when position to insert is =1;
	if(pos == 1) {
		insert_at_head(head , d);
		return;
	}
	
	node* temp = head;
	int count = 1;
	while(count < pos-1) {
		temp = temp -> next;
		count++;
	}
	
	node* nodetoinsert = new node(d);
	
	nodetoinsert -> next  = temp -> next;
	
	temp -> next = nodetoinsert;
}

int main() { 
      
      node*  node1 = new node(10);
      node* head = node1;
    
      node* node2 = new node(20);
      node* node3 = new node(30);
      node* node4 = new node(40);
      
      node1 -> next = node2;
      node2 -> next = node3;
      node3 -> next = node4;
      
      int pos;
      cout<<"enter the position = "<<endl;
      cin>>pos;
      int val;
      cout<<"enter the value to add ="<<endl;
      cin>>val;
      
	  insert_at_given_position(head,pos,val);
      print(head);
      
      
}
