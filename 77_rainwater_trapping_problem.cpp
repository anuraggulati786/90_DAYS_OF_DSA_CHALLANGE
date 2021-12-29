#include<iostream>
#include<bits/stdc++.h>       // Given an array of integers of size ‘n’.
// Our aim is to calculate the maximum sum of ‘k’ 
// consecutive elements in the array.
using namespace std;

int sliding_window(int arr[],int n)
{
	int left[n];
	int right[n];
	
	left[0]=arr[0];
	
	for(int i=1;i<n;i++)
	{
		left[i]=max(left[i-1],left[i]);
	}
	
		right[n-1]=arr[n-1];

	for(int i =n-2;i>=0;i--)
	{
		right[i]=max(right[i+1],arr[i]);
	}
	
	int ans=0;
	for(int i=0;i<n;i++)
	{
		ans+=(min(left[i],right[i])-arr[i]);
	}
	return ans;
	
}

int main()
{
	int n;
	cout<<"enter the size "<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the elements of the array "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<sliding_window(arr ,n);
}

