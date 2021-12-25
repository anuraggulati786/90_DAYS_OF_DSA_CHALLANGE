#include <bits/stdc++.h>
using namespace std;

int longestEvenOddSubarray(int a[], int n)
{

	int longest = 1;
	int cnt = 1;


	for (int i = 0; i <= n - 1; i++)  // ye yaha par i jo hai vo index 0 se n-2 tak jayega 
	                                // or bhai yaha par hum agar  i< n   le lenge toh bhai jab hum condition check karenge na arr[i]+arr[i+1] wali toh index aage nikal jayegi 5 se or sab gudgobar ho jayega  to is lia n-2 tak proper ..
	{

		// increment count if consecutive
		// elements has an odd sum
		if ((a[i] + a[i + 1]) % 2 == 1) // condition to remember for this checking alternate even odd.
		{
			cnt++;
		}
		else {
			longest = max(longest, cnt);

			// Reinitialize cnt as 1 consecutive
			cnt = 1;
		}
	}

	// Length of 'longest' can never be 1
	// since even odd has to occur in pair or more
	// so return 0 if longest = 1
	if (longest == 1)
		return 0;

	return max(cnt, longest);
}

int main()
{
	int n;
	cout<<"eneter the size of the array :"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the elements of the array :"<<endl;
	for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}

	cout <<"longest even odd subarray is of length : =" <<longestEvenOddSubarray(arr, n);
	return 0;
}

