#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool is_possible(vector<int>arr,int n,int m,int mid) {
	
	int student_count=1;
	
	int pagesum=0;
	
	for(int i=0;i<n;i++) {
		
		if(pagesum  + arr[i] <mid) {
			pagesum += arr[i];
		}
		else {
			student_count++;
			if(student_count > m || arr[i] > mid) {
				return false ;
			}
			pagesum = arr[i];
		}
	}
	return true;

}

int allocate_books(vector<int>arr,int n,int m) {
	
	int s=0;
	int sum=0;
	
	for(int i=0;i<n;i++) {
		sum += arr[i];
	}
	int e=sum;
	int ans=-1;
	int mid=s + (e-s)/2;
	
	while(s<=e) {
		if(is_possible(arr,n,m,mid)) {
			ans=mid;
			e=mid-1;
		}
		else {
			s=mid+1;
		}
		mid = s + (e-s)/2;
	}
	
	return ans ;

}

int main() {
	int n;
	cout<<"enter the size of the array "<<endl;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	
	int m;
	cout<<"enter the total number of students "<<endl;
	cin>>m;
	
	cout<<allocate_books(arr,n,m);
}
