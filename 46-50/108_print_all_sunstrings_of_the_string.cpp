#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void substring_of_a_string(string s) {
	
	int n = s.size();              //      i,j    j  j  j  j 
	                               //       a     b  c  d  e  || n-->5 
	for(int i=0; i<n; i++) {
		
		for(int j=i; j<n; j++) {
			
			 for(int k = i; k <= j; k++) {
			 	 
			 	 cout<<s[k];
			 }
			 cout<<endl;
		}
	}
	
	
}
int main() {
	string s;
	cout<<"enter the string "<<endl;
	cin>>s;
	substring_of_a_string(s);
}
