#include<bits/stdc++.h>
using namespace std;

bool is_rotations(string str1 , string str2) {
	if(str1.length() != str2.length()) {
		return false;
	}
	string temp = str1 + str1;
	
	int m = str2.length();
	int n = temp.length();
	int j;
	for(int i=0; i<=n-m; i++) {
		for(j=0; j<m; j++) {
			if(temp[i+j] != str2[j]){
				break;
			}
		}
		if(j==m){
			return true;
		}
	}
	return false;
}

int main() {
	string str1,str2;
	cout<<"enter the both strings "<<endl;
	cin>>str1>>str2;
	
	if(is_rotations(str1,str2)) {
		cout<<"string are rotations of each other "<<endl;
		
	}
	else {
		cout<<"string are not rotations of each other "<<endl;
	}
}
