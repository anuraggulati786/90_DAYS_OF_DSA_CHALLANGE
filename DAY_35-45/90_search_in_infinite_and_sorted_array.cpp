#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int binary_search(int arr[],int key,int s,int e) {
	while(s<=e) {
		int mid = s+(e-s)/2;
		
		if(arr[mid]==key) {
			return mid;
		}
		else if(arr[mid]>key) {
			e=mid-1;
		}
		else if(arr[mid]<key) {
			s=mid+1;
		}
	}
	return 0;
}




int main () {
        
			cout<<"here we have an infinite sorted array alright! so its gon be entered by the system "<<endl;
			cout<<"for our simplicity we took an array of size "<<endl;
			int n;
			cout<<"enter the size of the array "<<endl;
			cin>>n;
			
			int arr[n];
			cout<<"enter the elements of the array "<<endl;
			for(int i=0;i<n;i++) {
				cin>>arr[i];
			}
			int key;
			cout<<"enter the key element "<<endl;
			cin>>key;
			
			
		{
	      int s=0;
	      int e=1;
	
	       while(arr[e]<key) {
	    	s=e;
	    	e=2*e;
	    }
	
	         if( binary_search(arr,key,s,e)) {
	         	cout<<"element found!!"<<endl;
			 }
			 else {
			 	cout<<"not found //.//!!@ "<<endl;
			 }
}
		

}
