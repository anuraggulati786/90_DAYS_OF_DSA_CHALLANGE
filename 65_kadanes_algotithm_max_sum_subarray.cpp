#include<iostream>
using namespace std;
long int max_sum_subarray(int arr[],int n)
{
	int max_sum=0;
	int curr_sum=0;
	for(int i=0;i<n;i++)
	{
		curr_sum=curr_sum+arr[i];
		
		if(curr_sum>max_sum)
		{
			max_sum=curr_sum;
		}
		if(curr_sum<0)
		{
			curr_sum=0;
		}
	}
	return max_sum;
	
	
}
int main()
{   cout<<" (: KADANE'S ALGORITHM :) "<<endl;
	int n;
	cout<<"eneter the size of the array :"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the elements of the array :"<<endl;
	for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	
	cout<<"maximum sum subarray is : "<<max_sum_subarray(arr,n);
}
