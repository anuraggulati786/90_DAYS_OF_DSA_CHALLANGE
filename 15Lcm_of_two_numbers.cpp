#include<iostream>
using namespace std;

long int gcd(int a,int b){
	if(a==b)
	return a;
    else if(a%b==0)
	return b;
	else if(b%a==0)
	return a;
	else{
		if(a>b)
		{
			return gcd(a%b,b);
		}
		else if(a<b)
		{
			return gcd(a,b%a);
		}
	}
}

long int lcm(int a, int b){
	
	return (a/gcd(a,b))*b;
}

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<lcm(a,b);
}
