#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool linear_search(int arr[] , int size , int key) {
// you can see the go of the program....		
	for(int i=0 ;i<size; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	
	
	if(size == 0) {
	return false;
    }
	if(size == 1){
		if(arr[0] == key) {
			return true;
		}
		else {
			return false;
		}
	}
     
    if(arr[0] == key) {
    	return true;
	} 
	else return linear_search(arr+1,size-1,key);
	
	
}

int main() {
	
	int arr[9] = {1,2,3,4,5,6,7,8,9};
	int size = 9;
	int key;
	cout<<"Enter the key element !!"<<endl;
	cin>>key;
	
 	if(linear_search(arr,size,key)) {
 		cout<<"Element found in the array :"<<endl;
	 }
	 else {
	 	cout<<"Element not found !"<<endl;
	 }
}
