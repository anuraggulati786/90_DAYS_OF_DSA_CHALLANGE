#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void uppercase_to_lowercase_string(char name1[] , int length ) {
	
	int i=0;
	int j=length-1;
	
	while(i<=j) {
		if(name1[i] >= 'A' && name1[i] <= 'Z') {
			i++;
		}
		else {
			name1[i] = name1[i] - 'a' + 'A';
			i++;
		}
		
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
    uppercase_to_lowercase_string(name1 , length);
    cout<<"the lowercase string is ="<<endl;
	cout<<name1<<endl;
	return 0;
}
