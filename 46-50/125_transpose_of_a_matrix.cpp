#include<bits/stdc++.h>
using namespace std;                        
void matrix_transpose(int arr[][3]) {      
	for(int i= 0; i<=2; i++) {
		for(int j=i; j<=2; j++) {
			int temp      = arr[i][j];           
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
	cout<<"the teansposed matrix is "<<endl;
	for(int i = 0; i<=2; i++) {
		for(int j=0; j<=2; j++) {
			cout<<arr[i][j]<<" "; 
		}
		cout<<endl;
	}

}
int main() {
	int arr[3][3] ;
	cout<<"enter the element of the matrix "<<endl;
	for(int i=0; i<=2; i++) {
		for(int j=0; j<=2; j++) {
			cin>>arr[i][j];
		}
	}
	cout<<"our entered matrix will be look like "<<endl;
	for(int i=0; i<=2; i++) {
		for(int j=0; j<=2; j++) {
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	matrix_transpose(arr);    
}
