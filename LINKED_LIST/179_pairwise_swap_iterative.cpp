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

node* pair_wise_swap(node* head)
{
    // If linked list is empty or
    // there is only one node in list
    if (head == NULL || head->next == NULL)
        return head;
  
    // Initialize previous and current pointers
    node* prev = head; // p at head 
    node* curr = head->next; // q at head -> next par...
  
    head = curr; // Change head 2nd node is our answer head so ...
  
    // Traverse the list
    while (true) {
        
		node* next = curr->next;
        curr->next = prev; // Change next of
        // current as previous node
  
        // If next NULL or next is the last node
        if (next == NULL || next->next == NULL) {
            prev->next = next;
            break;
        }
  
        // Change next of previous to next of next
        prev->next = next->next;
  
        // Update previous and curr
        prev = next;
        
        curr = prev->next;
    }
    return head;
}


int main() { 
      
      node* head = new node(2);
      node* node1 = new node(4);
      node* node2 = new node(6);
      node* node3 = new node(15);
      node* node4 = new node(18);
      // links dn
	  head  -> next = node1;
      node1 -> next = node2;
      node2 -> next = node3;
      node3 -> next = node4;
    
      // fxn call...
      node* ans = pair_wise_swap(head);
      // print resultant LL...
      print_list(ans);
      
	  return 0;
}
