#include<iostream>
using namespace std;

int main()

{
	int n;
	int count=0;
	cin>>n;
	
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			count++;
      }
      	}
      	
      	if(count==0)
      	{
      		cout<<"yes it is a prime number "<<endl;
		  }
		  else{
		  	cout<<"Not prime "<<endl;
		  }
}

