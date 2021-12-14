#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int count_set_bit(int  n){
	int count=0;
	
	while(n!=0){
		if(n & 1== 1)
			count+=1;
			n >>=1;
	}
	cout<<count;
}

int main()
{
	int n;
	cout<<"enter  an number :"<<endl;
	cin>>n;
	count_set_bit(n);
}
