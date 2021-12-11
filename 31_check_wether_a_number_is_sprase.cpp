#include<iostream>
using namespace std;

int is_sprase(int n){
	int res= n&(n>>1);
	if(res==0)
	return true;
	return false;
}
int main()
{
	int n;
	cout<<"enter an number "<<endl;
	cin>>n;
	if(is_sprase(n))
	{
		cout<<"its a sprase number "<<endl;
	}
	else{
		cout<<"it is not a sprase number <<endl;
	}      
}
