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

node* sort_0_1_2(node* head) {
	
	node* zero_start = NULL;
	node* zero_end = NULL;
	node* one_start = NULL;
	node* one_end = NULL;
	node* two_start = NULL;
	node* two_end = NULL;
	
	node* curr = head;
	for(curr = head; curr != NULL; curr = curr -> next) {
		
		int d = curr -> data;
		// if data is even...
		if(d == 0) {
			// if we are at our first node which is 0...
			if(zero_start == NULL) {
				zero_start = curr;
				zero_end = zero_start;
			}
			// else
			else {
				zero_end -> next = curr;
				zero_end = zero_end -> next;
			}
			
		}
		// if data is odd...
		else  if(d == 1){
			// if we are at our first node which is 1...
			if(one_start == NULL) {
				one_start = curr;
				one_end = one_start;
			}
			// else 
			else {
				one_end -> next = curr;
				one_end = one_end -> next;
			}
		}
		else {
			// if we are at first node which is 2...
			if(two_start == NULL) {
				two_start = curr;
				two_end = two_start;
			}
			// else 
			else {
				two_end -> next = curr;
				two_end = two_end -> next;
			}
		}
	}
	
	// jab ya toh keval even node ho linked list mai ya to sirf odd ho to koi dikkat he nhi hai head ko he return kara denge hum ...
	
//	if(even_start == NULL || odd_start == NULL ) {
//		return head;
//	}
	if(one_start  != NULL) {
	zero_end -> next = one_start;
	one_end -> next = two_start;
	two_end -> next = NULL;
    }	
    else {
    	zero_end -> next = two_start; 
    	two_end -> next = NULL;
	}
	
//	one_end -> next = two_start;
//	two_end -> next = NULL;
	
	return zero_start;
	
}

int main() { 
      
      node* head = new node(2);
      node* node1 = new node(1);
      node* node2 = new node(0);
      node* node3 = new node(2);
      node* node4 = new node(1);
      head  -> next = node1;
      node1 -> next = node2;
      node2 -> next = node3;
      node3 -> next = node4;
      node4 -> next = NULL;
      node* get = sort_0_1_2(head);
      print_list(get);
      return 0;
}
