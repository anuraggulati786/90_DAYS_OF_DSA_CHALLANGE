#include<iostream>
using namespace std;

int max_consecutive_ones(int n)
{
	int count=0;
	while(n!=0){
		n=n&(n<<1);
		count+=1;
	}
	return count ;
}

int main()
{
	int n;
	cout<<"enter an number "<<endl;
	cin>>n;
	cout<<max_consecutive_ones(n);
}
