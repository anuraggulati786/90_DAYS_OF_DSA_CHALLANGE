// deletion of last node in DLL...
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node {
	public :
		int data;
		node* next;
		node* prev;
	// parameterised constructor...
	node(int value) {
		this -> data = value;
		this -> next = NULL;
		this -> prev = NULL;
	}
	// destructor...
	~node() {
		int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<< val << endl;
	}
		
};

void print_DLL_byHead(node* head) {
	node* temp = head;
	
	while(temp != NULL) {
		cout<< temp -> data <<" ";
		temp = temp -> next;
	}
	cout<<endl;
}

void insert_at_head(node* &head , int d) {
    
	if(head == NULL) {
		node* temp = new node(d);
		head = temp;
	}
	
	// new node temp is created that u want to insert..
    node* temp1 = new node(d);
    
    temp1 -> next = head;
    head -> prev = temp1;
    
    // head to first node par lana padega na..
    head = temp1;
}

void delete_last_in_DLL(node* &tail) {

	node* curr = tail;
	
	curr -> prev -> next = NULL;
	// last ko update kardo ab
	tail = curr -> prev;
	curr -> prev = NULL;
	// memory curr delete kardo
	delete curr;
	
}

void delete_head_in_DLL(node* &head) {
	
	if(head == NULL) {
	  // return null;
	}
	if(head -> next == NULL) {
		delete head;
		head = NULL;
	}
	
	node* temp = head;
	temp -> next -> prev == NULL;
	head = temp -> next;
	temp -> next = NULL;
	// delete temp...
	delete temp;
	
}


void delete_given_position(node* &head , node* &tail , int pos) {
	
	
	// case first when the position is 1 meand delete the head node...
	if(pos == 1) {
		delete_head_in_DLL(head);
	}
	else {
		// deleting in b/w or last node...
		node* curr = head;
        node* prev = NULL;

        int cnt = 1;
        while(cnt < pos) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        if(curr -> next == NULL) {
          tail = curr -> prev;
		}
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;
	}

}

int main() { 
      
      node*  node1 = new node(10);
      node* head = node1; // head hai ye DLL ka ...
      node* tail = node1; // tail hai ye DLL ka...
      
	  print_DLL_byHead(head);
	  insert_at_head(head , 20);
	  print_DLL_byHead(head);
	  insert_at_head(head , 30);
      print_DLL_byHead(head);
      insert_at_head(head , 40);
      print_DLL_byHead(head);
      // deleting last node.....
      int pos;
	  cout<<"enter position that u want to delete :"<<endl;
	  cin>>pos;
      delete_given_position(head,tail,pos);
      print_DLL_byHead(head);
      cout<<"Head is at "<<head -> data<<endl;
	  cout<<"Tail is at "<<tail -> data<<endl;
      
}
