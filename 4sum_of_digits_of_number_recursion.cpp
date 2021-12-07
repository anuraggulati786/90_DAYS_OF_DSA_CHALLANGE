#include<iostream>
using namespace std;
int sum_of_digits(int n);

int main()
{
	int x;
	cout<<" enter a numbe r ";
	cin>>x;
	int res=sum_of_digits(x);
	cout<<res;
	
}

int sum_of_digits(int n)
{
	if(n==1)
	return 1;
	return n%10 + sum_of_digits(n/10);
}


