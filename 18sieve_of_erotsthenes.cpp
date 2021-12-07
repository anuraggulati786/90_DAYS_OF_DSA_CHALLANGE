#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long int sieve(int n){
	
	vector<bool> prime(n+5,true);
	for(int i=2;i*i<=n;i++)
	{
		if(prime[i])
		{
			for(int j=i*i;j<=n;j+=i)
			{
				prime[j]=false;
			}
		}
	}
	
	
	for(int i=2;i<=n;i++)
	{
		if(prime[i])
		{
			cout<<i<<endl;
		}
	}
	
	
}




int main()
{
	int n;
	cout<<"Enter an integer up to which you want to find all prime numbers :"<<endl;
	cin>>n;
	sieve(n);
	
}
