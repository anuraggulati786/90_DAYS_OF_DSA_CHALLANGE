#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
	int n=5;
	// print the address of the n
	cout<<"address of the n is ="<<&n<<endl;
	//now we create a pointer *ptr 
	int *ptr=&n;
	// this will gave us the value at the address 
	cout<<*ptr<<endl;
    // this will gave us the address of the n
	cout<<ptr<<endl;
	
	// if we want to copy a pointer to another then we do like this 
	int *copy = ptr;
	
	//this will gave us the value of copy
	cout<<*copy<<endl;
	// this is for getting the address of copy
	cout<<copy<<endl;
	
	
	// incrementing our pointer like this will not increase the value it is still equal to 5 
	
	cout<<(*ptr)++<<endl;
	cout<<"after this we will got the increaded value :"<<*ptr<<endl;
	
	// but if we increment like this *ptr = *ptr + 1;
	*ptr = *ptr + 1;
	cout<<*ptr<<endl;
	
	
	
	
	cout<<"seeee "<<endl;
	int a = 7;
    int *c = &a;
    c = c + 3;
    cout  << c << endl;
    
    
    
    char arr[20];
  int i;
  for(i = 0; i < 10; i++) {
    *(arr + i) = 65 + i;
  }
  *(arr + i) = '\0';
  cout << arr;
	
	
}
