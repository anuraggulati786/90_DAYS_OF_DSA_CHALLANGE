#include<iostream>
using namespace std;


long int rotate_one_by_one(int arr[],int n)
{
	int temp=arr[0];
	for(int i=0;i<=n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[n-1]=temp;
}

long int rotate_left(int arr[],int d,int n)
{
	for(int i=0;i<d;i++)
	{
		rotate_one_by_one(arr,n);
	}
}

int print_array(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}




int main(){
	int n;
	cout<<"enter the size of your array :"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the elements of your array :"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int d;
	cout<<"how many elements you wants to shift "<<endl;
	cin>>d;
	
	rotate_left(arr,d,n);
	cout<<"array after left rotation by "<<d<<" elements is =:"<<endl;
	print_array(arr,n);
}
