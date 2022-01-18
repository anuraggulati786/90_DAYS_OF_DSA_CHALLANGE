#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int  merge(vector<int> vec1,vector<int> vec2, int n3,int n1,int n2) {
	vector<int> vec3(n3);
	int i=0;
	int j=0;
	int k=0;
	while(i<n1 && j<n2) {
		
		if(vec1[i]<vec2[j]) {
			vec3[k]=vec1[i];
			i++;
			k++;
		}
		else if(vec1[i]>vec2[j]) {
			vec3[k]=vec2[j];
			j++;
			k++;
		}
	
		
	}
	
	while(i<n1) {
		vec3[k]=vec1[i];
		k++;
		i++;
	}
	
	while(j<n2) {
		vec3[k]=vec2[j];
		k++;
		j++;
	}
	
	
	
	cout<<"merged array is ="<<endl;
	for(int z=0; z<n3; z++) {
		cout<<vec3[z]<<" ";
	}
	
}



int main() {
	int n1 ;
	cout<<"enter the size of the vector 1 :"<<endl;
	cin>>n1;
	
	vector<int> vec1;
	cout<<"enter the elemnts "<<endl;
	for(int i=0; i<n1; i++)  {
		int t;
		cin>>t;
		vec1.push_back(t);
	}
	
	int n2;
	cout<<"enter the size of the vector 2 "<<endl;
	cin>>n2;
	
	vector<int> vec2;
	cout<<"enter the elemnts "<<endl;
	for(int i=0; i<n2; i++)  {
		int t;
		cin>>t;
		vec2.push_back(t);
	}
	
	int n3=n1+n2;
	merge(vec1,vec2,n3,n1,n2);
	
}
