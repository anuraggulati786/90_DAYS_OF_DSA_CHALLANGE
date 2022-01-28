#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int first_non_repeating_character(string str) {

    int find[256]; // array to store First Index
 
    // initializing all elements to -1
    for(int i = 0; i<256; i++)
        find[i] = -1;
 
    // sets all repeating characters to -2 and non-repeating characters
      // contain the index where they occur
    for(int i = 0; i<str.length(); i++) {
        if(find[str[i]] == -1) {
            find[str[i]] = i;
        }else {
            find[str[i]] = -2;
        }
    }
 
    int res = INT_MAX;
 
    for(int i = 0; i<256; i++) {
 
        // If this character is not -1 or -2 then it
        // means that this character occurred only once
        // so find the min index of all characters that
        // occur only once, that's our first index
        if(find[i] >= 0)
            res = min(res, find[i]);
    }
     
    // if res remains INT_MAX, it means there are no
    // characters that repeat only once or the string is empty
    if(res == INT_MAX) return -1;
    else return res;
        
}


int main() {
	string str;
	cin>>str;
	int index = first_non_repeating_character(str);
	if(index == -1) {
		cout<<"All character are repeating or the length of the string is 0 "<<endl;
	}
	else
	cout<<"first non repeating character is ="<<str[index];
	
}
