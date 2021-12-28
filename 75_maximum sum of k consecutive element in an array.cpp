#include<iostream>
#include<bits/stdc++.h>       // Given an array of integers of size ‘n’.
// Our aim is to calculate the maximum sum of ‘k’ 
// consecutive elements in the array.
using namespace std;

int sliding_window(int arr[],int n,int k)
{
	int max_sum=0;
	for(int i=0;i<(n-k)+1;i++)
	{
		int curr_sum=0;
		 for(int j=0;j<k;j++)
		 {
		 	curr_sum=curr_sum+arr[i+j];
		 }
		 max_sum=max(max_sum,curr_sum);
	}
	return max_sum;
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

