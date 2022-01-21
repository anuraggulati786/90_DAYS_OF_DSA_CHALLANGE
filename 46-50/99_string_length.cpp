#include<iostream>
using namespace std;
#include<bits/stdc++.h> 

int main() {
	char name[20];
	cout<<"enter the name of your's "<<endl;
	cin>>name;
	
	int length=0;
	
	for(int i=0; name[i] != 0; i++) {
		length++;
	}
	cout<<"length of the given entered string is ="<<length;
}
