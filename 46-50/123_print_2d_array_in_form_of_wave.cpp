#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_in_form_of_wave(int arr[3][3], int row, int col) {
	
	// column loop
    for(int co=0; co<3; co++) {
             if(co&1) {
             	// means odd or odd is bottom to up approch 
             	
             	// row loop 
             	
             	for(int ro=3-1; ro>=0; ro--) {
             		cout<<arr[ro][co]<<" ";
				 }
			 }
			 else if(co&1 !=1){
			 	// means 0 or even column index wala case .. means up to bottom ...
			 	
			 	// roe loop 
			 	for(int ro=0; ro>3; ro++) {
			 		cout<<arr[ro][co]<<" ";
				 }
 			 }                           
        
    }
    
   
}

int main() {
	int arr[3][3] ={1,2,3,4,5,6,7,8,9};
	cout<<"Our entered matrix will look like "<<endl;
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
    print_in_form_of_wave(arr,3,3);
}
