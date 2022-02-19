#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e) {
	// mid nikal lo 
	int mid = s + (e - s)/2;
	
	int len1 = (mid - s) + 1; // ye length 0 se mid tak hai including mid also bro...
	int len2 = (e - mid);     // ye length mid +1 se end takl hai bro....
	
	// heap mai array bana lo..
	
	int *first  = new int[len1];
	int *second = new int[len2];
	
	// ab copy kara lo values 0 se mid first mai or fir mid+1 se end tak second mai.... 
	//index of resultant array
	int index_of_resultant_array = s;
	
	// for left array..
	for(int i=0; i<len1; i++) {
		first[i] = arr[index_of_resultant_array++] ;
	}
	
	// for right array..
	for(int i=0; i<len2; i++) {
		second[i] = arr[index_of_resultant_array++];
	}
	
	
	// now merge two sorted array's :->
	
	int index1 = 0;
	int index2 = 0;
	int merge_index = s;
	
	while(index1 < len1 && index2 <  len2) {
	
	if(first[index1] < second[index2]) {
		arr[merge_index++] = first[index1++];
	}
	else {
		arr[merge_index++] = second[index2++];
	}
	
 }
    while(index1 < len1) {
    	arr[merge_index++] = first[index1++];
	}
	
	while(index1 < len1) {
    	arr[merge_index++] = second[index2++];
	}
	
	// ab free karlo heap memory ko jo use kia tha ...
	
	delete first ;
	delete second;
 
}
 
void merge_sort(int *arr, int s, int e) {
	// base case 
	if(s >= e) {
		return;
	}
	
	int mid = s + (e - s)/2;
	// sort left part  break kar rhe hai apne array ko bar bar jab tak har ek element single na ho jaye jaise ki approch main samghaya tha right!!
	merge_sort(arr,s,mid);
	// sort right part 
	merge_sort(arr,mid+1,e);
	
	// now we merge the two sorted array's     [ yaha par merging chalu hai bro single element fir uske bad two chote chote arrays or fir or bade or fir usse bhi bade arrays ki!! :)
	merge(arr,s,e);
	
}

int main() {
	int arr[15] = {1,12,32,42,2,3,5,9,56,53,0,333,456,109,91};
	int n = 15;
	
	merge_sort(arr,0,n-1);
	
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
