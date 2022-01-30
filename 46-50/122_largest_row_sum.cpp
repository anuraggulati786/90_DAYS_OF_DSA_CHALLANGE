#include<iostream>
using namespace std;

void largest_row_sum(int arr[3][3], int row, int col) {
	int maxi = INT_MIN ;
	int row_index = -1;
    for(int col=0; col<3; col++) {
        int sum = 0;                                    
        for(int row=0; row<3; row++) {                  
            sum += arr[row][col];
        }
        if(sum > maxi) {
        	maxi = sum;
        	row_index = row;
		}
    }
    cout<<"the row which has largest sum is "<<row_index<<endl;
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
	
	largest_row_sum(arr,3,3);
}
