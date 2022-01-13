#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int  selection_sort(int arr[],int n) {
	
	for(int i=0; i<n-1; i++) {
		int min_index=i;
		   for(int j=i+1; j<n; j++) {
		   	    if(arr[j] < arr[min_index]) {
		   	    	min_index=j;
				   }
		   }
		   
		 swap(arr[min_index],arr[i]);
		
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

	selection_sort(arr,n);

}
