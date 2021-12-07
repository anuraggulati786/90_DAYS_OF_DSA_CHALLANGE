#include<iostream>
using namespace std;
int func(int n);

int main()
{
	int n;
	cout<<" entyer ta numver ";
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
		cout<<n<<" ";
		func(n-1);
	}
}

