#include<iostream>
using namespace std;

        //time->> O(n) //  space :--> O(1) most enhanced way
                                     // by brute force you do by two loops and time  cpmplexity is =O(n^2) and spacve is =O(n).
                     // and one is by using space take an auxilary array and atore the maximum value by visiting left to right inside array   time complexity will come =O(n) and space is O(n).
int max_profit(int arr[],int n)
{
	int profit=0;
	
	for(int i=1;i<n;i++)
	{
	   if(arr[i]>arr[i-1])
	   {
	   	profit+=(arr[i]-arr[i-1]);
	   }
	}
	return profit;
}
int main()
{
	int days;
	cout<<"enter the total number of days   :"<<endl;
	cin>>days;
	int price[days];
	cout<<"enter the stock prices of each day   :"<<endl;
	for(int i=0;i<days;i++)
	{
		cin>>price[i];
	}
	cout<<"maximum profit is="<<max_profit(price,days);
}
