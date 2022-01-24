// naive approch string matching algo..
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define smm(const) const.begin(),const.end()

// string 1st name is s1 of length() m
// string 2nd name is p1 of length() n

void string_matching_algo(string p1, string s1)
{
	int m = p1.size();
	int n = s1.size();
    //Sliding the window to while text length 
	for (int i = 0; i <= n - m; i++) { // we will iterate till the length of the larger string.
		int j;

		
		for (j = 0; j < m; j++)
			if (s1[i + j] != p1[j])
				break;

		if (j == m)                         // if after the j loop the value of j is equal to the length and loop is not breaked then we can say that the substring is found inside thr text entered 
			cout << "Pattern found at index "
				<< i << endl;
	}
}

int main()
{
	string s1 = "sheshellsseashells";
	string p1 = "shells";
	string_matching_algo(p1, s1);
	return 0;
}
