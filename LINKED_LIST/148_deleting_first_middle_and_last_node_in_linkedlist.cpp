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
	
	~node() {
		int value = this -> data;
		if(this -> next != NULL) {
			delete next ;
			this -> next = NULL;
		}
	}
		
};

void print(node* head) {
	node* curr = head;
	while(curr != NULL) {
		cout<<curr -> data <<" ";
		curr = curr -> next;
	}
	cout<<endl;
}

delete_at_given_position(node* head , int position) {
	
	// deleting first node...
	if(position == 1) {
		node* temp = head;
		head = head -> next;
		temp -> next = NULL;
		delete temp;
	}
	// deleting node in between...
	else {
		node* curr = head;
		node* prev = head;
		int cnt = 1;
		while(cnt < position) {
			prev = curr;
			curr = curr -> next;
			cnt++;
		}
	prev -> next = curr -> next;
	curr  -> next = NULL;
	delete curr;
}
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
      
      cout<<"before deletion nodes are = "<<endl;
      print(head);
	  
	  delete_at_given_position(head,pos);
	  cout<<"After deletion nodes are = "<<endl;
      print(head);
      
      
}
