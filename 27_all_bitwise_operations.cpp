#include<iostream>            
#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n1,n2;
	cout<<"enter the value of n1 and n2:"<<endl;
	cin>>n1;
	cin>>n2;
	cout<<"bitwise and of the n1 and n2 is =";
    cout<< (n1 & n2);
    cout<<endl;
    cout<<"bitwise or of the n1 and n2 is =";
    cout<< (n1 | n2);
    cout<<endl;
    cout<<"bitwise not of n1 and n2 respectively are= ";
    cout<< (!n1)<<" "<< (!n2);
    cout<<endl;
    cout<<"bitwise xor of n1 and n2 is =";
    cout<< (n1 ^ n1);
    
    cout<<" left and right shift :"<<endl;
    
    cout<<"left shift of n1=";
    cout<< n1<<1;
    cout<<endl;
    cout<<"right shift of n1=";
    cout<< (n1>>1);
}
