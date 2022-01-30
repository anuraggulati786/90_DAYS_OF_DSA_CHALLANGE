#include<iostream>
using namespace std;

//to print row wise sum
void columns_wise_sum(int arr[][3], int row, int col) {
    cout << "Printing Sum column wise -> " << endl;
    for(int col=0; col<3; col++) {
        int sum = 0;                                    
        for(int row=0; row<3; row++) {                  
            sum += arr[row][col];
        }
        cout << sum << " ";
    }

    cout << endl;
}
int main() {
	int arr[3][3];
	
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			cin>>arr[i][j];
		}
	}
	
	cout<<"Our entered matrix will look like "<<endl;
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	columns_wise_sum(arr,3,3);
}
