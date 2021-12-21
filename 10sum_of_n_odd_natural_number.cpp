#include<iostream>
int sum_odd(int n);
using namespace std ;

int main()
{
	int n;
	cout<<" enter the number :"<<endl;
	cin>>n;
	cout<<" sum of the first "<<n<<" odd natural number is="<<sum_odd(n)<<endl;
}

int sum_odd(int n)
{

	if(n==1)
	return 1;
	else
	return  2*n-1+sum_odd(n-1);
	
}

