#include<iostream>            
#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[] , int first ,int last ,int mid ,int val )                                          
{      
       
      while(first<=last)
 {
    if(arr[mid]<val)
    {
        first=mid+1;
        }
        else if(arr[mid]==val)
        {
            cout<<" the number found at the position :"<<mid+1;
            break;
        }
        else{
            last=mid-1;

        }


 }
 if(first>last)
 {
     cout<<"element not found !! try again:"<<endl;
 }

    
           
       
 
}
int main()
{   int n;
    cout<<"enter the size of the array :"<<endl;   
    cin>>n;
    int arr[n];    
    cout<<"enter the elements inside the array in sorted array only for bunary search ::"<<endl;
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
	int key;
	cout<<"eneter the key element that you want to search:"<<endl;
	cin>>key;
	
	int first =0;
    int last= n-1;
    int mid=(first+last)/2;
	
	binary_search(arr,first,last,mid,key);
}
