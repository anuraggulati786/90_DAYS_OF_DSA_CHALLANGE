#include<iostream>
#include<bits/stdc++.h>       // Given an array of integers of size ‘n’.
// Our aim is to calculate the maximum sum of ‘k’ 
// consecutive elements in the array.
using namespace std;

int sub_array(int arr[] ,int n,int k,int sum)
{
	for(int i=0;i<n-k+1;i++)
	{
		int curr_sum=0;
		for(int j=0;j<k;j++)
		{
			curr_sum+=arr[i+j];
			
		}
		
		if(curr_sum==sum)
		{
			return true;
		}
	}
	return false;


	
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
	cout<<"enter the subarray size:"<<endl;
	cin>>k;
	int sum;
	cout<<"enter the sum of the sub array :"<<endl;
	cin>>sum;
	if(sub_array(arr ,n,k,sum))
	{
		cout<<"yes there is an sub array present of size k of given  sum :"<<endl;
	}
	else{
		cout<<"nop"<<endl;
	}
}

