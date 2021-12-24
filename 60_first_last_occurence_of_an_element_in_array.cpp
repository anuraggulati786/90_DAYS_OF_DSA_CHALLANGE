#include<iostream>
using namespace std;
                                                     // O(log^2 n)    time ... space is O(1) ....
long int first_occurence(int arr[],int n,int key)
{
	int res=-1;
	int first=0;
	int last=n-1;
	while(first<=last)
	{
		int mid=(first+last)/2;
		
		if(key==arr[mid])
		{
			res=mid;
			last=mid-1;
		}
		else if(key<mid)
		{
			last=mid-1;
		}
		else{
			first=mid+1;
		}
	}
	return res;
}


long int last_occurence(int arr[],int n,int key)
{
	int res=-1;
	int first=0;
	int last=n-1;
	while(first<=last)
	{
		int mid=(first+last)/2;
		
		if(key==arr[mid])
		{
			res=mid;
			first=mid+1;
		}
		else if(key<mid)
		{
			last=mid-1;
		}
		else{
			first=mid+1;
		}
	}
	return res;
}



int main()
{
	int n;
	cout<<"enter the size of the array :"<<endl;
	cin>>n;
	cout<<"enter the elements of the array :"<<endl;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int key;
	cout<<"enter the key element of the array :"<<endl;
	cin>>key;
	
	cout<<"first occurence of the key element is ="<<first_occurence(arr,n,key)<<endl;
	cout<<"last occurence of the key element is ="<<last_occurence(arr,n,key);
}
