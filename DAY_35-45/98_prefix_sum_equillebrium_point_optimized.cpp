#include <bits/stdc++.h>
using namespace std;

void find(int arr[], int n)
{
	int mid = n / 2;
	int leftSum = 0, rightSum = 0;

	//calculation sum to left of mid
	for (int i = 0; i < mid; i++)
	{
		leftSum += arr[i];
	}
	//calculating sum to right of mid
	for (int i = n - 1; i > mid; i--)
	{
		rightSum += arr[i];
	}

	//if rightsum > leftsum
	if (rightSum > leftSum)
	{
		//we keep moving right until rightSum become equal or less than leftSum
		while (rightSum > leftSum && mid < n - 1)
		{
			rightSum -= arr[mid + 1];
			leftSum += arr[mid];
			mid++;
		}
	}
	else
	{
		//we keep moving right until leftSum become equal or less than RightSum
		while (leftSum > rightSum && mid > 0)
		{
			  += arr[mid];
			leftSum -= arr[mid - 1];
			mid--;
		}
	}

	//check if both sum become equal
	if (rightSum == leftSum)
	{
		cout <<"First Point of equilibrium is at index ="<< mid << endl;
		return;
	}

	cout <<"First Point of equilibrium is at index ="<< -1 << endl;
}
int main()
{
	int n;
	cout<<"enter the size of the array :"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the elements of the array :"<<endl;
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}

	find(arr, n);
}

