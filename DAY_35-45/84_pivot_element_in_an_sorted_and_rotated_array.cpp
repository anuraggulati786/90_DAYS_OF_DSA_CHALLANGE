#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int pivot_element(int arr[],int n) {
	
	int s=0;
	int e=n-1;
	int mid=s + (e-s)/2;
	
	while(s<e) {
		
	
	    if(arr[mid]>arr[0]){
		       s=mid+1;
		}
		else{
			e=mid;
		}
		
		mid=s + (e-s)/2;
	
	}
	return s;
	
}





int main() {
    
  int n;
  cout<<"eneter the size of the arary "<<endl;
  cin>>n;
  int arr[n];
  cout<<"enter the elements of the array "<<endl;
  for(int i=0;i<n;i++) {
  	cin>>arr[i];
  }
  
  cout<<"pivot element is present at the index ="<<pivot_element(arr,n)<<endl<<"and the element is "<<arr[pivot_element(arr,n)];
 
  
	  
}

