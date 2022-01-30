#include<iostream>
using namespace std;

bool is_present(int arr[4][4] , int key) {
	int row = 4;
	int col = 4;
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			if(arr[i][j] == key) {
				return true;
			}
		}
	}
	return false;
	
}
int main() {
	
	int row;
	cout<<"enter the number of the rows "<<endl;
	cin>>row;
	int col;
	cout<<"enter the number of columns "<<endl;
	cin>>col;
	
	int arr[row][col];
	//row wise input.....
cout<<"enter the values inside row wise matrix "<<endl;	
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			cin>>arr[row][col];
		}
	}
	int key;
	cout<<"enter the key element "<<endl;
	cin>>key;
	
	is_present(arr, key);
}
