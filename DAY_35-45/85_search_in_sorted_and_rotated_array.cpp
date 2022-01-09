#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int s,int e,int key) {

	while(s<=e){
			int mid=s+(e-s)/2;
	
	if(arr[mid]==key) {
		return mid;
	}
	else if(arr[mid]>key) {
		e=mid-1;
	}
	else{
		s=mid+1;
	}
	
}

return 0;
}

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
  
  int key;
  cout<<"plz enter the key element "<<endl;
  cin>>key;
  
  int pivot= pivot_element(arr,n);
  
  if(key>=arr[pivot]&&key<=arr[n-1]) {
  	
  	if(binary_search(arr,pivot,n-1,key)){
  		cout<<"element found !!"<<endl;
  		
	  }
	  else{
	  	cout<<"not found !!"<<endl;
	  }
	  
  }
  else {
  		
		if(binary_search(arr,0,pivot-1,key)){
  		cout<<"element found !!"<<endl;
  		
	  }
	  else{
	  	cout<<"not found !!"<<endl;
	  }
	  
  }
  
}

