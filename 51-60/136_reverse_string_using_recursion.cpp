#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(string& str, int i, int j) {
	
	// base case
	if(i>j) {
		return;
	}
	
	swap(str[i],str[j]);
	i++;
	j--;
	
	// recursive case 
	
	reverse(str,i,j);
	
}

int main() {
	string s;
	cout<<"enter a string "<<endl;
	cin>>s;
	
	int i=0; int j=s.length()-1;
	
	reverse(s,i,j);
	cout<<"The reversed string is :"<<s<<endl;
	
}
