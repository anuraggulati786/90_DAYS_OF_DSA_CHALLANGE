#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string insert_something(string s) {
    string res = "";
    for(int i=0; i<s.length(); i++) {
        if(s[i] == ' ') {
            res.push_back('@');
            res.push_back('4');
            res.push_back('0');
        }
        else {
            res.push_back(s[i]);
        }
    }
    return res;
}

int main() {
    string s;
    cout<<"enter the string "<<endl;
    cin.getline(s);
    cout<<"new string is ="<< insert_something(s);
}
