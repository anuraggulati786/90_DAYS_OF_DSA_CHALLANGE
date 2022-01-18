#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int  reverse(vector<int> vec1, int n) {
	
	int s=0;
	int e= n-1;
	
	while(s<=e) {
		swap(vec1[s],vec1[e]);
		s++;
		e--;
	}
	
	cout<<"reversed array is ="<<endl;
	for(int i=0; i<n; i++) {
		cout<<vec1[i]<<endl;
	}
}



int main() {
	int n ;
	cout<<"enter the size of tghe array :"<<endl;
	cin>>n;
	
	vector<int> vec1;
	
	for(int i=0; i<n; i++)  {
		int t;
		cin>>t;
		vec1.push_back(t);
	}
	
	reverse(vec1,n);
	
}
