#include<iostream>
using namespace std;

int count_set_bits(int n)
{   
    int count=0;
	while(n!=0){
		n = n & (n-1);
		count+= 1;
	}
	return count;
	
}

int main()
{
	int n;
	cout<<"enter the number :"<<endl;
	cin>>n;
	cout<<count_set_bits(n);
	
}
