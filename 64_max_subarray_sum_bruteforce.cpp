#include<iostream>
using namespace std;

        //time->> O(n) //  space :--> O(1) most enhanced way
                                     // by brute force you do by two loops and time  cpmplexity is =O(n^2) and spacve is =O(n).
                     // and one is by using space take an auxilary array and atore the maximum value by visiting left to right inside array   time complexity will come =O(n) and space is O(n).
int max_sum(int arr[],int n)
{
	int max_sum=INT_MIN;
	for(int i=0;i<n;i++)
	{
		int curr_sum=arr[i];
		  
		   for(int j=i;j<n;j++)
		   {
		   	   curr_sum=curr_sum+arr[j];
		   	   max_sum=max(max_sum,curr_sum);
		   }
	}
	return max_sum;
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
	cout<<"maximum sub array sum  is="<<max_sum(price,days);
}
