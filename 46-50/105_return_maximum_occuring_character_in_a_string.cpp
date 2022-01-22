#include<iostream>
using namespace std;


char max_occurence_of_a_char(string s) {
    int arr[26] = {0};
    int n;
    for(int i=0; i<s.length(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            n = s[i] - 'a';
        }
        else {
            n = s[i] - 'A';
        }
        arr[n]++;
    }
    int max =0;
    int ans =0;
    for(int i=0; i<26; i++) {
        if(arr[i] > max) {
            ans = i;
            max = arr[i];
        }
    }
    return 'a' + ans;
}

int main() {
    string s;
    cout<<"enter the string "<<endl;
    cin>>s;
    cout<<"maximum occured character is ="<<max_occurence_of_a_char(s);
}