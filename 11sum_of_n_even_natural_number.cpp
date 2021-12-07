#include<iostream>
int sum_even(int n);
using namespace std ;

int main()
{
	int n;
	cout<<" enter the number :"<<endl;
	cin>>n;
	cout<<" sum of the first "<<n<<" even natural numbers is="<<sum_even(n)<<endl;
}

int sum_even(int n)
{

	if(n==1)
	return 2;
	else
	return  2*n+sum_even(n-1);
	
}

