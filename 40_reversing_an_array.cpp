#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter the size of the array :"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the elements inside array :"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}		
	cout<<"array after reversing is ="<<endl;
	for(int i = n-1;i>=0;i--)
	{
		cout<<arr[i]<<" ";
	}
}
