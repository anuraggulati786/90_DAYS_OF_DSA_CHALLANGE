#include<iostream>
using namespace std;

long int reverse_num(long int n){
	int rev_num=0;
	while(n!=0)
	{
		int l;
		l=n%10;
		n=n/10;
		rev_num=rev_num*10 + l;
	}
	cout<<rev_num;
}



int main()
{
	long int n;
	cin>>n;
	reverse_num(n);
	
}
