#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long int find_pivot(int arr[],int n)
{   int first,last,mid;
    first=0;
    last=n-1;
    mid=(first+last)/2;
	
	 if(n==0)
	 return -1;
	 if(arr[0]<=arr[last])
	 return 0;
	 
	 while(first<=last)
	 {
	 	if(arr[mid]>arr[mid+1]){
	 		return (mid+1);
		 }
		 else if(arr[first]<=arr[mid])
		 {
		    first=mid+1;	
		 }
		 else{
		 	last=mid-1;
		 }
	 }

}

int main()
{
	int n;
	cout<<"enter the size of the array :"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter elemnts"<<endl;
	
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
    cout<<"piovot index is="<<find_pivot(arr,n);
	
}
