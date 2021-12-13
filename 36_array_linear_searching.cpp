#include<iostream>            
#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[] , int n,int key )                                          
{      int find=0;
       for(int i=0;i<n;i++){
       	if(arr[i]==key){
       		find+=1;
		   }
	}
	if(find!=0)
       cout<<"element found inside array:"<<endl;
    else
       cout<<"element not found :"<<endl;
}
int main()
{   int n;
    cout<<"enter the size of the array :"<<endl;   
    cin>>n;
    int arr[n];    
    cout<<"enter the elements inside the array "<<endl;
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
	int key;
	cout<<"eneter  the key element that you want to search:"<<endl;
	cin>>key;
	
	linear_search(arr,n,key);
}
