#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node {
	public :
		int data;
		node* next;
	// parameterised constructor...
	node(int value) {
		this -> data = value;
		this -> next = NULL;
  }
	// destructor...
	~node() {
		int val = this -> data;
        if(this -> next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<< val << endl;
	}
		
};

void print_CLL_by_Head(node* head) {
	node* temp = head;
	cout<<temp -> data <<" ";
	for(temp = temp -> next ; temp != head; temp = temp -> next) {
		cout<<temp -> data <<" ";
	}
	cout<<endl;
}

void detete_at_head_in_CLL(node* &head ) {
	    node* temp = head ;
	    
	    while(temp -> next != head) {
	    	temp = temp -> next;
		}
		temp -> next = head -> next;
		head -> next = NULL;
		head = temp -> next;	
}


// when reference to head is given optimized way in constant time O(1)...
void detete_at_given_position_in_CLL(node* &head , int pos) {
		
		if(pos == 1) {
			detete_at_head_in_CLL(head);
		}
		
		node* curr = head;
	    for(int i=0; i<pos -2; i++) {
	    	curr = curr -> next;
		}
		node* temp = curr -> next;
		curr -> next = curr -> next -> next;
		temp -> next = NULL;
		delete temp;
			
}

int main() { 
      
      node*  node1 = new node(10);
      node* head = node1;
      node*  node2 = new node(20);
      node*  node3 = new node(30);
      node*  node4 = new node(40);
      node*  node5 = new node(50);
      
      node1 -> next = node2;
      node2 -> next = node3;
      node3 -> next = node4;
      node4 -> next = node5;
      node5 -> next = node1;
	  
	  cout<<"before insertion :->"<<endl;
      print_CLL_by_Head(head);
      
      cout<<"after deletion at 2nd position :->"<<endl;    
      
      detete_at_given_position_in_CLL(head , 2);
      print_CLL_by_Head(head);
      cout<<"head is at => "<< head -> data <<endl;
      
}
