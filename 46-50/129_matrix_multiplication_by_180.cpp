#include <bits/stdc++.h>
using namespace std;

void rotateMatrix(int mat[][3])
{   int N = 3;
cout<<"our 180 degree rotated matrix will be :"<<endl;
	for (int i = N - 1; i >= 0; i--) {
		for (int j = N - 1; j >= 0; j--)
			cout<<mat[i][j]<<" ";

		cout<<endl;
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
	cout<<"our entered matrix 1 will be look like "<<endl;
	for(int i=0; i<=2; i++) {
		for(int j=0; j<=2; j++) {
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}

	rotateMatrix(arr1);
	return 0;
}

