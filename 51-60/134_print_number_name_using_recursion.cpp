#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool say_number_name(string arr[] , int number) {
    if(number == 0) {
    	return 1;
	}
    
    int rem = number%10;
    number = number/10;
    say_number_name(arr,number);
    cout<<arr[rem]<< " ";
}

int main() {
	
	string arr[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
	int size = 10;
    int number;
    cout<<"Enter your number :"<<endl;
    cin>>number; 
 	say_number_name(arr,number); 	
}
