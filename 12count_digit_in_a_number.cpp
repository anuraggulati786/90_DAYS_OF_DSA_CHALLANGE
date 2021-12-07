#include<iostream>
using namespace std;
int find_digit(int n)
{
	int count =0;
	
	while(n!=0)
	{
		n=n/10;
		++count;
		
	}
	return count;
}
int main()
{
	long long int n;
	cin>>n;
	
	cout<<find_digit(n);
	
	
}
