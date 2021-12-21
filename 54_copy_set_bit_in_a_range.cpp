#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int copysetbit(int a,int b,int l,int r)
{   if(l<1||r>32)
    return -1 ;
    else 
    
	for(int i=l;i<=r;i++)
	{
		int mask=1<<(i-1); // mask length .....
		
		// If i'th bit is set in b, set i'th
       // bit in a also.
       // else if ith bit is not set in b then no problem do nothing ...
		if(b&mask)
		a=a|mask;
	}
}

int main ()
{
	int a,b,l,r;
	cout<<"enter the value of a:"<<endl;
	cin>>a;
	cout<<"enter the value of b:"<<endl;
	cin>>b;
	cout<<"enter value of l:"<<endl;
	cin>>l;
	cout<<"enter value of r:"<<endl;
	cin>>r;
	copysetbit(a,b,l,r);
	cout<<a;

}
