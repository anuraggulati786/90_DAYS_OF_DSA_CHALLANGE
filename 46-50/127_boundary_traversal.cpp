#include<bits/stdc++.h>
using namespace std;                        
void boundary_traversal(int arr[][3]) {   
cout<<"Our boundary traversal matrix contains only these element :"<<endl;   
	for(int i= 0; i<=2; i++) {
		for(int j=0; j<=2; j++) {
			if(i==0 || j==0 || i ==2 || j == 2) {
				cout<<arr[i][j]<<" ";
			}
			else {
				cout<<" "<<" ";
			}
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
	boundary_traversal(arr);    
}
