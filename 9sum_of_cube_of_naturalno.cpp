#include<iostream>
using namespace std;
int sum(int n);

int main()
{
	int n;
	cout<<" enter the number :"<<endl;
	cin>>n;
	cout<<" the sum of cube of "<< n <<"natural number is ="<<sum(n);
	
}


int sum(int n)
{
	if(n==1)
	return 1;
	else 
	return n*n*n+sum(n-1);

}
