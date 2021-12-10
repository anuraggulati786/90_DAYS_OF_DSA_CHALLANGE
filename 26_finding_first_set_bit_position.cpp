#include<iostream>            
#include<bits/stdc++.h>
using namespace std;

int first_set(int n)                                           //  10>->>     1 0 1 0  it return's first set bit =2 
{       int pos=1;                                             //  for 20 ->> 1 0 1 0 0  it returns 3 as first set bit 
        
        while( !(n & 1)){
        	pos++;
        	n=n>>1;
		}
		           return pos;
}

int main()
{   int n;
    cout<<"enter the number  :"<<endl;   
    cin>>n;
    cout<<first_set(n);
}
