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
		st.pop();
	}
	
	cout<<"Reversed String using Stack is = "<<endl;
	
	while(s.empty() != 1) {
		cout<<s.top()<<" ";
		s.pop();
	}
	
	
}




//*********RECURSIVE CODE ************





class Solution
{
    public:
    void helper(stack<int>&s,int count, int n) {
        // b ase case 
        if(count == n/2) {
            s.pop();
            return;
        }
        
        int num = s.top();
        s.pop();
        helper(s,count+1,n);
        s.push(num);
        
        
    }
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
       int count = 0;
       helper(s, count, sizeOfStack);
    }
};



int main() {
	
	stack<int> s ;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	delete_mid_of_stack(s,s.size());
	
}
