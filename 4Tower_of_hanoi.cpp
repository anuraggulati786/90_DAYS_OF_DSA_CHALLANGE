#include<iostream>
using namespace std;

void toh(int n,int a1,int a2,int a3);

int main()
{   int x=1,y=2,z=3;
	int n;
	cout<<" enter the number of discs :"<<endl;
	cin>>n;
	toh(n,x,y,z);
	
}

void toh(int n,int a1,int a2,int a3)
{   
	if(n>=1)
{
		   toh(n-1,a1,a3,a2);
		   cout<<a1<<" to "<<a3<<endl;
		
		   toh(n-1,a2,a1,a3);
			
	}
}
