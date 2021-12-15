#include <bits/stdc++.h>
using namespace std;

int rorated_array(int arr[],int n)     // 1(arr[0] initialized )  ,  (loop start fro i=1 index)2, (then we take t=arr[i] )3 ,4, 5 
{
	int temp=arr[0];
	for(int i=1;i<n;i++)
	{   int t=arr[i];
		temp=min(temp,t);
	}
	return temp;
}

int min(int temp,int t)
{
	if(temp>t){
		return t;
	}
	else{
		return temp;
	}
}




int main()
{
	int n;
	cout<<"enter the size of your array :"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the elements of your array :"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout << "Minimum element is = : "
		<< rorated_array(arr, n);

	return 0;
}

