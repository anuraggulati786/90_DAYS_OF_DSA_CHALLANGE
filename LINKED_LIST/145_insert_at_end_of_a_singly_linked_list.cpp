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

void insert_at_end(node* &tail , int d) {
	// created a new node...
	node* temp = new node(d);
	// ab last mai add karne ke lia last node ka next bhi to pata hona chaheye na to uske lia...
	tail -> next = temp;
	tail = tail -> next;
}

void print(node* head) {
	// ek pointer bana lis hai node* type ka jo ki head ki he point karega hume head ko chuna bhi nahi hai ..agar chua to head kahi or point karega fir hum print nahi kara payege sare elements ek ad miss ho jayenge...
	node* curr = head;
	while(curr != NULL) {
		cout<<curr -> data <<" ";
		curr = curr -> next;
	}
	cout<<endl;
}

int main() { 
      // ek noide bana li hai 
      node* node1 = new node(10);
      // head bhi node1 ko he point kar rha hai ..
	  node* head = node1;
	  //tail bhi node1 ko hi point kar rha hai..
	  node* tail = node1;
      // function call to insert 20..
	  insert_at_end(tail , 20);
      // function call to print the linked list elements. strating from head ..
	  print(head);
      //insert call
	  insert_at_end(tail , 30);
      // insert call
	  insert_at_end(tail , 40);
      // print call the resultant linked list element's..
	  print(head);
      
}
