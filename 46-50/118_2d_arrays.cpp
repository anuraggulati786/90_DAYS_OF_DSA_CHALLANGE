#include<iostream>
using namespace std;
int main() {
	int arr[3][4];
	//row wise input bro.....
cout<<"enter the values inside 3X4 row wise matrix "<<endl;	
	for(int i=0; i<3; i++) {
		for(int j=0; j<4; j++) {
			cin>>arr[i][j];
		}
	}
	
	// print
cout<<"row wise matrix will look like "<<endl;	
	for(int i=0; i<3; i++) {
		for(int j=0; j<4; j++) {
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//column wise input bro.....
cout<<"enter the values inside 3X4 column wise matrix "<<endl;	
	for(int i=0; i<4; i++) {
		for(int j=0; j<3; j++) {
			cin>>arr[j][i];
		}
	}
	
	// print
cout<<"column wise matrix will look like "<<endl;	
	for(int i=0; i<3; i++) {
		for(int j=0; j<4; j++) {
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
