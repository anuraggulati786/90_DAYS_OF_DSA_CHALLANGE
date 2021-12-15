#include <bits/stdc++.h>
using namespace std;

void reverseAr(int arr[], int start, int end)
{
	while (start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void leftRotate(int arr[], int d, int n)
{
	if (d == 0)
		return;

	d = d % n;

	reverseAr(arr, 0, d - 1);
	reverseAr(arr, d, n - 1);
	reverseAr(arr, 0, n - 1);
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}

int main()
{
	int n;
	cout<<"enter the size of your array :"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the elements of your array :"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int d;
	cout<<"how many elements you wants to shift "<<endl;
	cin>>d;

	leftRotate(arr, d, n);
	printArray(arr, n);

	return 0;
}

