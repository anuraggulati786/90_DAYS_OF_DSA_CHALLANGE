// C++ implementation to sort the given matrix
#include <bits/stdc++.h>
using namespace std;

#define SIZE 10

// function to sort the given matrix
void sortMat(int mat[][3], int n)
{
	// temporary array of size n^2
	int temp[n * n];   
	int k = 0;

	// copy the elements of matrix one by one
	// into temp[] array
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			temp[k++] = mat[i][j];

	// sort temp[]
	sort(temp, temp + k);
	
	// copy the elements of temp[] one by one
	// in mat[][] ye matrix hai 
	k = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			mat[i][j] = temp[k++];
}

// function to print the given matrix
void printMat(int mat[][3], int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << mat[i][j] << " ";
		cout << endl;
	}
}

int main()
{
	int arr1[3][3] ;
	cout<<"enter the element of the matrix 1"<<endl;
	for(int i=0; i<=2; i++) {
		for(int j=0; j<=2; j++) {
			cin>>arr1[i][j];
		}
	}
	int n = 3;

	cout << "Original Matrix:\n";
	printMat(arr1, n);

	sortMat(arr1, n);

	cout << "\nMatrix After Sorting:\n";
	printMat(arr1, n);

	return 0;
}

