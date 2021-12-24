#include<iostream>
using namespace std;
int f;
int l;                                                   // O(log^2 n)    time ... space is O(1) ....
long int first_occurence(int arr[],int n,int key)
{
	f=-1;
	int first=0;
	int last=n-1;
	while(first<=last)
	{
		int mid=(first+last)/2;
		
		if(key==arr[mid])
		{
			f=mid;
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
   
}


long int last_occurence(int arr[],int n,int key)
{
	l=-1;
	int first=0;
	int last=n-1;
	while(first<=last)
	{
		int mid=(first+last)/2;
		
		if(key==arr[mid])
		{
			l=mid;
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
	
	first_occurence(arr,n,key)<<endl;
	last_occurence(arr,n,key)<<endl;
	cout<<"total frequency of the "<<key<<" element is "<<l-f;
	
}
