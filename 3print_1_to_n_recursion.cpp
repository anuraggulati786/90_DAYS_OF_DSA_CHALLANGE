#include<iostream>
using namespace std;
int func(int n);

int main()
{
	int n;
	cout<<" enter a number ";
	cin>>n;
func(n);
}

int func(int n)
{
	if(n==1)
	{
		cout<<"1 ";
	}
	else
	{
	
		func(n-1);
			cout<<n<<" ";
	}
}

