#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse_string(char name1[] , int length ) {
	
	int i=0;
	int j=length-1;
	while(i<j) {
		swap(name1[i],name1[j]);
		i++;
		j--;
	}
}

int main() {
	char name1[100];
	cout<< "enter the string :"<<endl;
	cin>>name1; 
	
	int length=0;
	
	for(int i=0; name1[i] != '\0'; i++) {
		length++;
	}
	cout<<length<<endl;
    reverse_string(name1 , length);
    cout<<"reverse string is =>"<<endl;
	cout<<name1<<endl;

	return 0;
}
