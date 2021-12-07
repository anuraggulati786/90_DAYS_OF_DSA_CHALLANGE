#include<iostream>
int binary(int n);
using namespace std;

int main()
{
	int x;
	cout<<" enter the decimal number :"<<endl;
	cin>>x;
	binary(x);
}

int binary(int n)
{
	if(n==1)
	{
		cout<<"1 ";
	}
	else{
	binary(n/2);
	cout<<n%2<<" ";
}
}
