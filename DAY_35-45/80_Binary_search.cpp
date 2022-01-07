#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr,int n,int key) {
	
	int first=0;
	int last=n-1;
	int mid = first + (last-first)/2;
	
	while(first<=last) {
		if(key==mid) {
		     cout<<"element found "<<endl;
		}
		else if(key>mid) {
			first=mid+1;
		}
		else {
			last=mid-1;
		}
	}
		  	cout<<"not found"<<endl;

	
}




int main() {
    
      int n;
      cout<<"enter the size of the array "<<endl;
      cin>>n;
      int arr[n];
      cout<<"enter the elements of the array "<<endl;
      for(int i=0; i<n; i++) {
      	cin>>arr[i];
	  }
	  int k;
	  cout<<"enter the key element "<<endl;
	  cin>>k;
	  binary_search(arr, n,  k);
	 




}
