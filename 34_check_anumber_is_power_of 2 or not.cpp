#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x=__builtin_popcount(n);
	if(x==1){
		cout<<"number is power of 2 "<<endl;
	
	}
	else{
		cout<<"not power of 2"<<endl;
	}
}
