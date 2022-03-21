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


node* find_mid(node* head) {
	
	if(head == NULL) {
		return head;
	}
	
	node* slow = head;
	node* fast = head -> next;
	while(fast != NULL && fast -> next != NULL) {
              slow = slow -> next;
			  fast = fast -> next -> next;
	}
	return slow;
}


node* merge_sort_in_LL(node* head) {
	
	//base case
    if( head == NULL || head -> next == NULL ) {
        return head;
    }
    
    // break linked list into 2 halvs, after finding mid
    node* mid = find_mid(head);
    
    node* left = head;
    node* right = mid->next;
    mid -> next = NULL;
    
    //recursive calls to sort both halves
    left = merge_sort_in_LL(left);
    right = merge_sort_in_LL(right);
    
    //merge both left and right halves
    node* result = merge_2_sorted_LL(left, right);
    
    return result;
	
	
}


int main() { 
      
      node* head = new node(22);
      node* node1 = new node(4);
      node* node2 = new node(61);
      node* node3 = new node(151);
      node* node4 = new node(18);
      // links dn
	  head  -> next = node1;
      node1 -> next = node2;
      node2 -> next = node3;
      node3 -> next = node4;

      
      // fxn call...
      node* op = merge_sort_in_LL(head);
      // print resultant LL...
      print_list(op);
      
	  return 0;
}
