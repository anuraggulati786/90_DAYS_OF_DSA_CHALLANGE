#include<iostream>
using namespace std;

long int check_palindrome(long int n){
	int rev_num=0;
	int orginal_num=n;
	while(n!=0)
	{
		int l;
		l=n%10;
		n=n/10;
		rev_num=rev_num*10 + l;
	}
	if(rev_num==orginal_num)
	{
		cout<<"palindrome :"<<endl;
	}
	else{
		cout<<" not a palindrome "<<endl;
	}
}



int main()
{
	long int n;
	cin>>n;
	check_palindrome(n);
	
}
