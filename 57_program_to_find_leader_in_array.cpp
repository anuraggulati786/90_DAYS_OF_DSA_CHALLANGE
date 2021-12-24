#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long int max_from_right(int arr[],int n)
{   
  int max_from_right=arr[n-1];
  cout<<max_from_right<<" ";
  
  for(int i=n-2;i>=0;i--)
  {
  	if(max_from_right<arr[i])
  	{
  		max_from_right=arr[i];
  		cout<<max_from_right<<" ";
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
		
	max_from_right(arr, n)	;
	
}
