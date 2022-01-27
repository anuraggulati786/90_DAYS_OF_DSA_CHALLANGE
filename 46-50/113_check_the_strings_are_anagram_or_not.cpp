#include<bits/stdc++.h>
using namespace std;

bool are_anagram(string str1 , string str2) {

    int n1 = str1.length();
    int n2 = str2.length();
    if (n1 != n2)
        return false;
 
    // Sort both the strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
 
    // Compare sorted strings iterate over it character by character
    for (int i = 0; i < n1; i++)
        if (str1[i] != str2[i])
            return false;
 
    return true;
}

int main() {
	string str1,str2;
	cout<<"enter the both strings "<<endl;
	cin>>str1>>str2;
	
	if(are_anagram(str1,str2)) {
		cout<<"string are anagram each other "<<endl;
		
	}
	else {
		cout<<"string are not anagram of each other "<<endl;
	}
}
