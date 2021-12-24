#include<iostream>
using namespace std;


int max_consicutive_ones(int arr[],int n)
{
	int count=0;
	int result=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			count=0;
		}
		else{
			count++;
			result=max(result,count);
		}
	}
	return result;
}
int main()
{
	int days;
	cout<<"enter the total number of days :"<<endl;
	cin>>days;
	int price[days];
	cout<<"enter the prices of each days :"<<endl;
	for(int i=0;i<days;i++)
	{
		cin>>price[i];
	}
	cout<<"maximum consicutive ones is="<<max_consicutive_ones(price,days);
}
