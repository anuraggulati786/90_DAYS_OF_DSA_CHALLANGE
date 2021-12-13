#include<iostream>
using namespace std;

int odd_occurences(int arr[] ,int n){
	for(int i=0;i<n;i++)
	{
		int count=0;                                                                         
		for(int j=0;j<n;j++)
			{
				if(arr[i]==arr[j])
					count+=1;
			}
			if((count%2) !=0)
				cout<<arr[i]<<endl;
				continue;
	
	}

}


int main()
{
	int n;
	cout<<"enter the size of array :"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	odd_occurences(arr,n);
}
