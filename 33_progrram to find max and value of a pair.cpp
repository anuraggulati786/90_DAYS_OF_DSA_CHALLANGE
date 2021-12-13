#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long int max_and(int arr[] , int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	  for(int j=i+1;j<n;j++)
	    res= max ( res , (arr[i]&arr[j]));
	    
	    return res;
}

int main()
{
	int n;
	int arr[n];
	cout<<"enter the size of the array "<<endl;
	cin>>n;
	cout<<"enter the elements of the array "<<endl;
	for(int i=0;i<n;i++)
	{   
	  cin>>arr[i];
	}
	
	cout<<"pair is="<<max_and(arr,n);
}
