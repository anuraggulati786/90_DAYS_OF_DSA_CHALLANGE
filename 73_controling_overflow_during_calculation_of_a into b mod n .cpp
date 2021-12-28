#include<iostream>         // calculating (a*b) % N
using namespace std;
static long max_power(long a,long  b,int n )
{
	int res=1;
	while(n>0)       
	{ 
		if((b&1)!=0)
		{
			res=(res%n * a%n) % n ;
		}
	    a=(a%n * a%n) % n;
	    
		b=b>>1;
	}
	return res;
}
int main()
{
	int a,b,n;
	cout<<"enter the number and power respectively:"<<endl;
	cin>>a>>b>>n;
	cout<<max_power(a,b,n);
}
