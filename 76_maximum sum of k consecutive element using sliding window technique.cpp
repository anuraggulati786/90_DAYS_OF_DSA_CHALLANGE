#include<iostream>
#include<bits/stdc++.h>       // Given an array of integers of size ‘n’.
// Our aim is to calculate the maximum sum of ‘k’ 
// consecutive elements in the array.
using namespace std;

int sliding_window(int arr[],int n,int k)
{
	int windo_sum=0;
	for(int i=0;i<k;i++)
	{
	   windo_sum+=arr[i];	
	}
	
	
	int curr_sum=windo_sum;
	for(int i=k;i<n;i++)
	{
		curr_sum+=arr[i]-arr[i-k];
		windo_sum=max(curr_sum,windo_sum);
	}
	return windo_sum;
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
	int k;
	cout<<"enter the value of k up to which you want ot find max.."<<endl;
	cin>>k;
	cout<<"max sum is =-> :"<<sliding_window( arr, n, k);
}

