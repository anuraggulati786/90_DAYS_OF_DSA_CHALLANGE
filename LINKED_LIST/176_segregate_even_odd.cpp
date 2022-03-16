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

node* segrigate_even_odd(node* head) {
	
	node* even_start = NULL;
	node* even_end = NULL;
	node* odd_start = NULL;
	node* odd_end = NULL;
	
	node* curr = head;
	for(curr = head; curr != NULL; curr = curr -> next) {
		
		int d = curr -> data;
		// if data is even...
		if(d % 2 == 0) {
			// if we are at our first even node than...
			if(even_start == NULL) {
				even_start = curr;
				even_end = even_start;
			}
			// else
			else {
				even_end -> next = curr;
				even_end = even_end -> next;
			}
			
		}
		// if data is odd...
		else {
			// if we are at our first odd node than...
			if(odd_start == NULL) {
				odd_start = curr;
				odd_end = odd_start;
			}
			// else 
			else {
				odd_end -> next = curr;
				odd_end = odd_end -> next;
			}
		}
	}
	
	// jab ya toh keval even node ho linked list mai ya to sirf odd ho to koi dikkat he nhi hai head ko he return kara denge hum ...
	
	if(even_start == NULL || odd_start == NULL) {
		return head;
	}
	
	even_end -> next = odd_start;
	odd_end -> next = NULL;
	
	return even_start;
	
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
      node4 -> next = NULL;
      node* get = segrigate_even_odd(head);
      print_list(get);
      return 0;
}
