#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int  bubble_sort(int arr[],int n) {
	
	for(int i=1; i<n; i++) {
		   for(int j=0; j<n-i; j++) {
		   	    if(arr[j] > arr[j+1]) 
		   	    	swap(arr[j],arr[j+1]);
				   
		   }		
	}
		for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	
}

int main() {
	int n;
	cout<<"enter the size of the unsorted array "<<endl;
	cin>>n;
	
	int arr[n];
	cout<<"enter the elements of the unsorted array "<<endl;
	for(int i=0; i<n; i++) { 
	   cin>>arr[i];
	}
	
	
	cout<<"Sorted array is now will be like "<<endl;

	bubble_sort(arr,n);

}
