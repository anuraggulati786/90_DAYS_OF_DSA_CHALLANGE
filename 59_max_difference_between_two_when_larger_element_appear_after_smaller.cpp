#include<iostream>
using namespace std;                           // efficient  approch  O(n)
long int find_maxdiff(int arr[],int n)
{
	int max_diff=arr[0]-arr[1];         // 2 3 10 6 4 8 1    here max_diff is= 2-3 =  -1
	int min_element=arr[0];             //  min_element  =  2 
	int i,j; 
	for(int i=1;i<n;i++)                    //for first iteration  arr[1]-arr[0](min_element) 
	{
		if(arr[i]-min_element>max_diff)
		max_diff=arr[i]-min_element;
		if(arr[i]<min_element)
		min_element=arr[i];
	}
	return max_diff;
}
int main()
{
	int n;
	cout<<"enter the size oif the array:"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the elements of the arrayu :"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"maximum difference is ="<<find_maxdiff(arr,n);
	
}
