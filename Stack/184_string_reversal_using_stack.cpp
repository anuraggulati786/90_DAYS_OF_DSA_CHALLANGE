#include<iostream>
#include<stack>
using namespace std;

int main() {
	
	
	string  s = "Anurag";
	stack<char> st;
	for(int i = 0; i<=s.length(); i++) {
		char ch = s[i];
		st.push(ch);
	}
	
	string result = "";
	
	while(st.empty() != 1) {
		char ch = st.top();
		result.push_back(ch);
		st.pop();
	}
	
	cout<<"Reversed String using Stack is = "<<result<<endl;
	
}
