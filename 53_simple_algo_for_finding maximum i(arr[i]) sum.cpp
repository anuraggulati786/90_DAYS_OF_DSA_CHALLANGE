#include <bits/stdc++.h>
using namespace std;
 
int maxsum(int arr[], int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
    	  int currsum=0;
    	  for(int j=0;j<n;j++)
    	  {
    	  	int index=(i+j)%n;
    	  	currsum+=j*arr[i];
		  }
		  res=max(res,currsum);
	}
	return res;
}


int main()
{
	int n;
	cout<<"enter the size of the array :"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the array elements :"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	cout<<maxsum(arr,n);
	
}
