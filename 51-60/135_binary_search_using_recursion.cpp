#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool binary_search(int arr[] , int key , int s , int e) {
// you can see the go of the program....		
	for(int i=0 ;i<9; i++) {
		cout<<arr[i]<<" " ;
	}
	cout<<endl;
	
	int mid ;
	mid = (s+e)/2;
	
	if(arr[mid] == key) {
		return true;
	}
	
    if(arr[mid] < key) {
    	return binary_search(arr , key , s = mid+1, e);
	} 
	if(arr[mid] > key) {
    	return binary_search(arr , key , s, e = mid-1);
	}

}

int main() {
	
	int arr[9] = {1,2,3,4,5,6,7,8,9};
	int size = 9;
	int key;
	cout<<"Enter the key element !!"<<endl;
	cin>>key;
	int start = 0;
	int end = 8;
 	if(binary_search(arr,key,start,end)) {
 		cout<<"Element found in the array :"<<endl;
	 }
	 else {
	 	cout<<"Element not found !"<<endl;
	 }
}
