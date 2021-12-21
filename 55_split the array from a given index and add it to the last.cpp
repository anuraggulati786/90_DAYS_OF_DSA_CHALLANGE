#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long int splitarray(int arr[],int n,int k)
{   
   int tmp[2*n];
   for(int i=0;i<n;i++)
   {
   	tmp[i]=arr[i];
   	tmp[i+n]=arr[0];
   }
   for(int i=k;i<=n+k;i++)
   {
   	 arr[i-k]=tmp[i];
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
		int k;
		cout<<"ENTER THE INDEX :";
		cin>>k;
		splitarray(arr,n,k);
		cout<<"resultant array is =:";
		for(int i=0;i<n;i++)
		cout<<arr[i];
		
	
}
