#include<iostream>             // simply it find unique ele,ment inside an ARRAY:===>>
#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cout<<"enter the size of the array:"<<endl;
	cin>>n;
    vector<int> vec(n);
	int res=0;
	for(int i=1;i<=n;i++){
		int it;
		cin>>it;
		res^=it;
	}	
	cout<<res;
}
