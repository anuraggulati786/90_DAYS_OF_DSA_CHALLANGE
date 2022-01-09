#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int left_most(int arr[],int n,int key) {
	
	int s=0;
	int e=n-1;
	int mid=s + (e-s)/2;
	int index1=-1;
	while(s<=e) {
		
		if(arr[mid]==key) {
			index1= mid;
			e=mid-1;
		}
		else if(arr[mid]>key){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
		
		mid=s + (e-s)/2;
	
	}
	return index1;
	
}

int right_most(int arr[],int n,int key) {
	
	
	int s=0;
	int e=n-1;
	int mid=s + (e-s)/2;
	int index2=-1;
	while(s<=e) {
		
		if(arr[mid]==key) {
			index2=mid;
			s=mid+1;
		}
		else if(arr[mid]>key){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
		
		mid=s + (e-s)/2;
	}
	
return index2;
	
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
  cout<<"enter the key element "<<endl;
  cin>>key;
  
  cout<<"left most element is present at the index ="<<left_most(arr,n,key);
  cout<<" \n";
  cout<<"right most element is present at the index ="<<right_most(arr,n,key);

  
	  
}

