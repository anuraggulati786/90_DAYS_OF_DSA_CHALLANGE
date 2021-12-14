#include<bits/stdc++.h>
using namespace std;

int 	cyclic_rotation_by_one(int arr[],int n)

{
	int temp=arr[n];
	for(int i=n;i>=2;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[1]=temp;
}
int print(int arr[],int n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<arr[i]<<" ";
	}
}


int main()
{
	int n;
	cout<<"enter the size of the array :"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the elements of the array :"<<endl;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	
	cyclic_rotation_by_one(arr,n);
	print(arr,n);
}
