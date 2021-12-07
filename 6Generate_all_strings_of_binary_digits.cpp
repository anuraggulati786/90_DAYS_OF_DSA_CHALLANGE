#include<iostream>
using namespace std;
void bin(int n,char arr[]);

int main()
{
	int n;
	cout<<"enter the totalm size of the array:";
	cin>>n;
	void bin(int ,char[]);
	char arr[n+1];
	arr[n]='\0';
	bin(n,arr);
	
	
}

void bin(int n,char arr[])
{
	if(n<1)
	{
		cout<<arr;
		cout<<endl;
	}
	
	else
	{
		arr[n-1]='0';
		bin(n-1,arr);
		arr[n-1]='1';
		bin(n-1,arr);
	}
	
	
}
