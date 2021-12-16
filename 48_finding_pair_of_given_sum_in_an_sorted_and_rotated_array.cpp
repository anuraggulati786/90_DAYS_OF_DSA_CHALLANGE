#include<iostream>
using namespace std;




void find_pivot(int arr[],int n,int sum)
{    int i;
	for(i=0;i<n;i++)
	 if(arr[i]>arr[i+1])
	 break;
	 
	 int s=i+1;
	 int l=i;
	 while(l!=s)
	 {
	 	if(arr[s]+arr[l]==sum)
	 	{
	 		cout<<"pair is = ("<<s<<","<<l<<endl;
		 }
		 else if(arr[s]+arr[l]>sum)
		 s=s+1;
		 else
		 l=(n+(l-1))%n;
	 }
}


int  main()
{
	int n;
	cout<<"enter the size of the array :"<<endl;
	cin>>n;
	int arr[n];
	cout<<"eneter the elements of the aray "<<endl;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	int sum ;
	cout<<"enter the sum:"<<endl;
	cin>>sum;
	
	find_pivot(arr,n,sum);
	return 0;
}
