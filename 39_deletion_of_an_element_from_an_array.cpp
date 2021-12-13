#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int pos,val,n;
    cout<<" enter the size of array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<" enter the elements of aray :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }

    cout<<" enter the index that youn want to delete:  "<<endl;
    cin>>pos;  //2 

    for(int i=pos;i<=n;i++)     ///     1  2  3(pos)  4  5 
    {
        arr[i]=arr[i+1];   
    }
    n=n-1;
    cout<<" the elements inside array after deletion is="<<endl;
    for(int i=0;i<n;i++)
    {
            cout<<arr[i]<<endl;
    }

    
}
