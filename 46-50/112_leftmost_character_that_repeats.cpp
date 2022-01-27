#include<bits/stdc++.h>
using namespace std;

bool first_repeating(string str) {
	if(str.length() <= 1) {
		return -1;
	}
	bool visited[256];
	//now we will mark it as false not visited
	for(int i=0; i<256; i++) {
		visited[i] = false;
	}
	
	//now we will travers from right to left okk alright!
	
	int res_index = -1;
	for(int i= str.length()-1; i>=0; i--) {
		if(visited[str[i]] == false) {
			visited[str[i]] = true; // we will marked it now 
		}
		else {
			res_index = i;  // what happend here man see if the character is repeat and before it it is already marked true so if it repeats then that character is our first repeated character right and we will store its index ..
		}
	}
	// now we return res;
	return res_index;
}

int main() {
	string str;
	cout<<"enter the strings "<<endl;
	cin>>str;
	int index = first_repeating(str);
	if(index == -1) {
		cout<<"no repeated character is present "<<endl;
		
	}
	else {
		cout<<"left most repeated character is present and that is "<<str[index]<<endl;
	}
}
