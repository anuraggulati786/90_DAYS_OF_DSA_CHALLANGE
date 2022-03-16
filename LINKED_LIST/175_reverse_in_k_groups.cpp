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

node* reverse_in_k_group(node* head , int k) {
	
	if(head == NULL) {
		return head;
	}
	node* curr = head;
	node* next = NULL;
	node* prev = NULL;
	node* rest_head ;
	int count = 0;
	while(curr != NULL && count < k) {
		next = curr -> next;
		curr -> next = prev;
		prev = curr;
		curr = next;
		count++;
	}
    if(next != NULL) 
    	node* rest_head = reverse_in_k_group(next -> next , k);
    	
    	head -> next = rest_head;
    	
    	return prev;
		
}


int main() { 
      
      node* head = new node(10);
      node* node1 = new node(15);
      node* node2 = new node(10);
      node* node3 = new node(16);
      node* node4 = new node(15);
      head  -> next = node1;
      node1 -> next = node2;
      node2 -> next = node3;
      node3 -> next = node4;
      cout<<"enter the value of the k "<<endl;
      int k;
      cin>>k;
	  node* xrr = reverse_in_k_group(head,k);
      print_list(xrr);
      return 0;
}
