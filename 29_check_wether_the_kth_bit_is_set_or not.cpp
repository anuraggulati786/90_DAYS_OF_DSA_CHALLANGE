#include <bits/stdc++.h>
using namespace std;

int check_kth_bit(int n, int k)
{
    int temp;
    temp=1<<(k-1);
    bool x=(n&temp);
    if(x){
    	cout<<k<<"th"<<" bit is SET "<<endl;
	}
	else if(!x){
		cout<<k<<"th bit is UNSET "<<endl;
	}
}

int main()
{
	int n,k;
	cout<<" enter the number  :"<<endl;
    cin>>n;
	cout << "please enter the bit which you want to check set or not :"<<endl;
	cin>>k;
	check_kth_bit(n,k);
}

