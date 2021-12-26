#include <bits/stdc++.h>                   // most effiecient way this is and awsome also .. i loved the way to approch for linear time and constant space .
using namespace std;

int findCandidate(int a[], int size)
{
	int maj_index = 0, count = 1;
	for (int i = 1; i < size; i++) {
		if (a[maj_index] == a[i])
			count++;
		else
			count--;
		if (count == 0) {
			maj_index = i;
			count = 1;
		}
	}
	return a[maj_index];
}

bool isMajority(int a[], int size, int cand)
{
	int count = 0;
	for (int i = 0; i < size; i++)

		if (a[i] == cand)
			count++;

	if (count > size / 2)
		return 1;

	else
		return 0;
}

void printMajority(int a[], int size)
{

	int cand = findCandidate(a, size);


	if (isMajority(a, size, cand))
		cout << "Majority element is =" << cand << " ";

	else
		cout << "No Majority Element";
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

	// Function calling
	printMajority(arr,n);

	return 0;
}

