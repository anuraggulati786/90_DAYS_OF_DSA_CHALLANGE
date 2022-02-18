#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s, int i, int j) {
	
	// base case
	if(i>j) {
		return true;
	}
	
	if(s[i] == s[j]) {
		i++;
		j--;
	}
	if(s[i] != s[j]) {
		return false;
	}
	
	// recursive case 
    
	palindrome(s,i,j);
	
}

int main() {
	string s;
	cout<<"enter a string "<<endl;
	cin>>s;
	
	int i=0; int j=s.length()-1;
	
	if(palindrome(s,i,j)){
		cout<<"String is palindrome "<<endl;
	}
	else {
		cout<<"String is not a palindrome string "<<endl;
	}
	
	
}
