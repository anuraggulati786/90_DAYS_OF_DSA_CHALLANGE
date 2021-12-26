#include<iostream>
#include<bits/stdc++.h>
using namespace std;



long int find_majority(int arr[],int n)
{  
	int max_count=0;
	int index=-1;
	for(int i=0;i<n;i++)
	{   int count=0;
		for(int j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count+=1;
			}
			
			if(count>max_count)
			{
				max_count=count;
				index=i;
			}
		}
	}
	if(max_count>n/2)
	{
		cout<<"majority element is ="<<arr[index]<<endl;
	}
	else{
		cout<<"no majority element ";
	}

	
}


int main()
{   
	int n;
	cout<<"eneter the size of the array :"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the elements of the array :"<<endl;
	for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	
     find_majority(arr,n);
	
}
