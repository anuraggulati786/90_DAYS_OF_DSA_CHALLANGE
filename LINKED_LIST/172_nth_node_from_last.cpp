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
	while(curr != NULL) {
		cout<<curr -> data <<" ";
		curr = curr -> next;
	}
	cout<<endl;
}

void find_nth_node_from_last(node* head , int n) {
	
	if(head == NULL) {
		return;
	}
	node* first = head;
	// hum apne first ko  n+1 position par le jayege pehle for ek second ko head par rakh lenege or for dono mo same speed se run karenge jab tak first null nhi ho jata.....
	for(int i=0; i<n; i++) {
		if(first == NULL) {
			return;
		}
		first = first -> next;
	}
	node* second = head;
	while(first != NULL) {
		second = second -> next;
		first = first -> next;
	}
	cout<<"Nth node is ="<<second -> data <<endl;	
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
      cout<<"Enter the node that youn want :"<<endl;
      int n;
      cin>>n;
      print_list(head);
      find_nth_node_from_last(head,n);
      return 0;
}
