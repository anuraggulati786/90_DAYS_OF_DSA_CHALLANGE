#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool is_sorted(int arr[] , int size) {
// you can see the go of the program....	
	for(int i=0 ;i<size; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	
	// if size = 0 or 1 already sorted bro...
	if(size == 0) {
	return true;
    }
	if(size == 1){
		return true;
	}
     // now check the the forst two index bro if arr(0) is less than arr(1) than bro this part is sorted bro move to next element so we passed arr+1 and updated the size as size-1....
    if(arr[0] > arr[1]) {
    	return false;
	} 
	else return is_sorted(arr+1,size-1);
	
}

int main() {
	
	int arr[9] = {1,2,3,4,0,6,7,8,9};
	int size = 9;
	
 	if(is_sorted(arr,size)) {
 		cout<<"The given array is sorted :"<<endl;
	 }
	 else {
	 	cout<<"The given array is not sorted :"<<endl;
	 }
}
