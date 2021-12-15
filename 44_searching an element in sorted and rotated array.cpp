#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low,int high, int key)  //simple binary search algo
{
	if (high < low)
		return -1;

	int mid = (low + high) / 2; 
	if (key == arr[mid])
		return mid;

	if (key > arr[mid])
		return binarySearch(arr, (mid + 1), high, key);

	return binarySearch(arr, low, (mid - 1), key);
}

int findPivot(int arr[], int low, int high)
{
	
	if (high < low) // when aray is sorted but not rotated 
		return -1;
	if (high == low)  // when array contain only one element 
		return low;

	int mid = (low + high) / 2;
	if (mid < high && arr[mid] > arr[mid + 1])
		return mid;

	if (mid > low && arr[mid] < arr[mid - 1]) 
		return (mid - 1);

	if (arr[low] >= arr[mid]) // if arr[mid] is < less than arr[low] then we see in low to mid -1..
		return findPivot(arr, low, mid - 1);

	return findPivot(arr, mid + 1, high); //else we do in mid+1 to hiegh ...
}


int pivotedBinarySearch(int arr[], int n, int key)
{
	int pivot = findPivot(arr, 0, n - 1);

	// If we didn't find a pivot,
	// then array is not rotated at all
	if (pivot == -1)
		return binarySearch(arr, 0, n - 1, key);

	// If we found a pivot, then first compare with pivot
	// and then search in two subarrays around pivot
	if (arr[pivot] == key)
		return pivot;

	if (arr[0] <= key)
		return binarySearch(arr, 0, pivot - 1, key);  // if key element is grater then arr[0] this means the element is found in  left sub array only 

	return binarySearch(arr, pivot + 1, n - 1, key);  // else if key element is less then arr[0] this means the element is found in  right  sub array only 
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
	int key;
	cout<<"enter the element that you want ot search  "<<endl;
	cin>> key;

	// Function calling
	cout << "Index of the element is : "
		<< pivotedBinarySearch(arr, n, key);

	return 0;
}

