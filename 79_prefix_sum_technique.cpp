// C++ program for Implementing
// prefix sum array
#include <bits/stdc++.h>
using namespace std;

// Fills prefix sum array
void fillPrefixSum(int arr[], int n, int prefixSum[])
{
	prefixSum[0] = arr[0];

	// Adding present element
	// with previous element
	for (int i = 1; i < n; i++)
		prefixSum[i] = prefixSum[i - 1] + arr[i];
}

// Driver Code
int main()
{
    int n;
	cout<<"enter the size "<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the elements of the array "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int prefixSum[n];

	fillPrefixSum(arr, n, prefixSum);
	for (int i = 0; i < n; i++)
		cout << prefixSum[i] << " ";
}

