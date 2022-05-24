#include<iostream>
#include<stack>
using namespace std;

void delete_mid_of_stack(stack<int> &s, int size) {
	
	stack<int> st;
	int mid = s.size()/2;
	
	for(int i = 0; i<mid; i++) {
		st.push(s.top());
		s.pop();
	}
	
	s.pop();
	
	while(st.empty() != 1) {
		s.push(st.top());
	}
	
	cout<<"Reversed String using Stack is = "<<endl;
	
	while(st.empty() != 1) {
		cout<<st.top()<<" ";
		st.pop();
	}
	
	
}


int main() {
	
	stack<int> s ;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	delete_mid_of_stack(s,s.size());
	
}
