#include<iostream>
using namespace std;
int check_sorted(int arr[],int n)
{
	if(n==0||n==1)
	return true;
	
	return 
	arr[n-1]>=arr[n-2]&& check_sorted(arr,n-1);
}
int main()
{
	int n;
	cout<<"enter the size of the array :"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter elemnts"<<endl;
	
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		if(check_sorted(arr,n))
		{
			cout<<"yes it is sorted :)"<<endl;
			
		}
		else{
		     cout<<"no it is  not sorted :("<<endl;
		}
		
}
