#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int  insertion_sort(int arr[],int n) {
	
	for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
                break;
            }
            
        }
        //copy temp value
        arr[j+1] = temp;  
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

	insertion_sort(arr,n);

}
