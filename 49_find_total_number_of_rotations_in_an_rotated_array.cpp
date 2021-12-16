#include<bits/stdc++.h>
using namespace std;

int countRotations(int arr[], int n)
{

	int min = arr[0], min_index;
	for (int i=0; i<n; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
			min_index = i;
		}
	}
	cout<<min_index;
}


int main()
{   int n;
    cout<<"enter the size :"<<endl;
    cin>>n;
	int arr[n] ;
	cout<<"enter the elemenets :"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	countRotations(arr, n);
	
}
