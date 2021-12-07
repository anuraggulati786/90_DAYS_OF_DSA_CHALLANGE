#include<iostream>
using namespace std;

long int check_prime(int n){
	
	int cnt=0;
	for(int i=2;i<=n/2;i++)
	{
		if(n % i==0)
		{
			++cnt;
		}
	}
	if(cnt==0 && n!=1){
		cout<<n<<" ";
	}
}

long int check_factor(int n){
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			check_prime(i);
		}
	}
}
int main()
{
	int n;
	cin>>n;
	check_factor(n);
}
