#include<bits/stdc++.h>
using namespace std;

void check_palindrome(string s) 
{
    int i = 0;
    int j = s.size()-1;
    int count = 0;
    while(i <= j) {
    	if(s[i] == s[j]) {
    		i++;
    		j--;
		}
		else {
			count++;
			break;
		}
	}
	if(count > 0) {
		cout<<"string is not palindrome!"<<endl;
	}
	else{
	cout<<"string is palindriome !"<<endl;
    } 
}

int main()
{
	string s ;
	cin>>s;
	check_palindrome(s);
	return 0;
}

