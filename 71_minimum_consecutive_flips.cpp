#include<iostream>
#include<bits/stdc++.h>
using namespace std;



long int min_consecutive_flips(int arr[],int n)
{  
	for(int i=1;i<n;i++)     // array is starting from 0th index....  0 1 0 0 
	{  	
	     if(arr[i]!=arr[i-1])
			{  
			
			if(arr[i]!=arr[0])
			  {
			  
			   cout<<"change from "<<i<<" to";
		     }
		     
		else{
			  cout<<i-1<<endl;
		       }
			
			}
}
  if(arr[n-1]!=arr[0])
  cout<<(n-1)<<endl;
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
	
     min_consecutive_flips(arr,n);
	
}
