#include<iostream>
using namespace std;

long long int expo(int a,int b)
{  
	if(b==0){
		return 1;
	}
	else{
		return a*expo(a,b-1);
	}
	// if b>1
	//p=p*a
}
int main(){
	long long int a,b;
	cin>>a>>b;
	cout<<expo(a,b);
}
