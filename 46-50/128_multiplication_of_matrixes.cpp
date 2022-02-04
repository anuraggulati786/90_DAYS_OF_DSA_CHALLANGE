#include<bits/stdc++.h>
using namespace std;                        
void matrix_multiplication(int arr1[][3] , int arr2[][3]) {      
         int row1 = 3;
         int col1 = 3;
         int row2 = 3;
         int col2 = 3;
         
         int rmat[row1][col2];
         
         for(int i=0 ;i<=2; i++) {
         	for(int j=0 ;i<=2; j++) {
         		rmat[i][j] = 0;
         		for(int k=0; k<=2; k++) {
         			rmat[i][j] = rmat[i][j] + ( arr1[i][k] * arr2[k][j]);
				 }
				 cout<<rmat[i][j]<<" ";
				}
				cout<<"\n";
		 }
		 
		

}
int main() {
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
	  
	int arr2[3][3] ;
	cout<<"enter the element of the matrix 2 "<<endl;
	for(int i=0; i<=2; i++) {
		for(int j=0; j<=2; j++) {
			cin>>arr2[i][j];
		}
	}
	cout<<"our entered matrix 2 will be look like "<<endl;
	for(int i=0; i<=2; i++) {
		for(int j=0; j<=2; j++) {
			cout<<arr2[i][j]<<" ";
		}
		cout<<endl;
	}
	  
	
	matrix_multiplication(arr1,arr2);    
}
