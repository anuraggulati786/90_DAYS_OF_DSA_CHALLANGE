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
	while(curr -> next != head) {
		cout<<curr -> data <<" ";
		curr = curr -> next;
	}
	cout<<endl;
}

node* merge_2_sorted_LL(node* &a , node* &b) {
	
	       
	       // base cases 
	       if(a == NULL) {
	       	return b;
		   }
		   if(b == NULL) {
		   	return a;
		   }
		   
		   
		   
		   //assign head and tail...
		   node* head = NULL;
		   node* tail = NULL;
		   if(a -> data <= b -> data) {
		   	head = tail = a;
		   	a = a -> next;
		   }
		   else {
		   	head = tail = b;
		   	b = b -> next;
		   }
		   
		   
		   
		   //now check values node by node...
		   
		   while(a != NULL && b != NULL) {
		   	
		   	      if(a -> data <= b -> data) {
		   	      	  
		   	      	  tail -> next = a;
		   	      	  tail = a;
		   	      	  a = a -> next;
		
					 }
		   	      else {
		   	      	
		   	      	   tail -> next = b;
		   	      	   tail = b;
		   	      	   b = b -> next;
		   	      	   
					 }
		   	
		   }
		   
		   
		   // while ll is end and either b or a becomes NULL...
		   
		   if(b == NULL) {
		   	tail -> next = a;
		   }
		   else {
		   	tail -> next = b; 
		   }
		   
		   
		   
		   // return head simple..
		   
		   return head;
	

}

int main() { 
      
      node* a = new node(2);
      node* node1 = new node(4);
      node* node2 = new node(6);
      node* node3 = new node(15);
      node* node4 = new node(18);
      // links dn
	  a  -> next = node1;
      node1 -> next = node2;
      node2 -> next = node3;
      node3 -> next = node4;

      node* b = new node(3);
      node* node5 = new node(5);
      node* node6 = new node(13);
      node* node7 = new node(16);
      node* node8 = new node(19);
      // links dn
	  b  -> next = node1;
      node1 -> next = node2;
      node2 -> next = node3;
      node3 -> next = node4;
      
      // fxn call...
      node* op = merge_2_sorted_LL(a,b);
      // print resultant LL...
      print_list(op);
      
	  return 0;
}
