#include<bits/stdc++.h>
using namespace std;
void snake_pattern(int arr[4][4],int rows,int cols) {
	for(int row = 0; row <rows; row++) {
		if((row == 0) || (row%2 == 0)) {
			for(int col =0; col<=3; col++) {
				cout<<arr[row][col]<<" ";
			}
		}
		if(row%2 != 0){
			for(int col =3; col>=0; col--) {
				cout<<arr[row][col]<<" ";
			}
		}
	}
}
int main() {
	int arr[4][4] ;
	cout<<"enter the element of the matrix "<<endl;
	for(int i=0; i<4; i++) {
		for(int j=0; j<4; j++) {
			cin>>arr[i][j];
		}
	}
	snake_pattern(arr,4,4);

}
