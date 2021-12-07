#include<iostream>
using namespace std;

int fib(int a);

int main()
{
	int x;
	cout<<" up to which term you want fibonacci series :"<<endl;
	cin>>x;
	cout<<" fibonacci series is ="<<endl;
	for(int i=1;i<=x;i++)
	{
		cout<<fib(i)<<" ";
	}
}

int fib(int a)
{
	if(a==1||a==2)
	{
		return 1;
	}
	else
	{
		return(fib(a-1)+fib(a-2));
	}
	
	
	
}
