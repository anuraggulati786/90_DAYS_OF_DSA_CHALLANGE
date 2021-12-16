#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long int find_pivot(int arr[],int n)
{
	int pivot=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>arr[i+1])
		{
		pivot=i+1;
		break;
	    }
	}
	return pivot;
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
