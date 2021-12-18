#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int rotation(int arr[],int n,int rotate)
{	vector<int> vec1;
    int maxv;
      
	for(int j=0;j<=rotate;j++)
	{

	int temp;
	temp=arr[n-1];
	
	for(int i=n-1;i>=0;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[0]=temp;
	
	int currval=0;
	for(int i=0;i<n;i++)
	{
		currval=currval+(i*arr[i]);
	}
	int t;
	t=currval;
	vec1.push_back(t);
    }
     cout<<*max_element(vec1.begin(), vec1.end());
    
}



int main()
{
	int n;
	cout<<"enter the size of the array :"<<endl;
	cin>>n;
	int rotate=n-1;
	int arr[n];
	cout<<"enter the elements of the array :"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	rotation(arr, n, rotate);
	
	
}
