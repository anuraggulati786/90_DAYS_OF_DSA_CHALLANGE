#include<iostream>
using namespace std;                           // brute force approch  O(n^2)
long int find_maxdiff(int arr[],int n)
{
	int max_diff=arr[0]-arr[1];
	int i,j;
	for(int i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[j]-arr[i]>max_diff)
			max_diff=arr[j]-arr[i];
		}
	}
	return max_diff;
}
int main()
{
	int n;
	cout<<"enter the size oif the array:"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the elements of the arrayu :"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"maximum difference is ="<<find_maxdiff(arr,n);
	
}
