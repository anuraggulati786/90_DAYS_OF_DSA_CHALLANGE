#include<iostream>          //sum of first n natural numbers 
using namespace std;

int add(int a);

int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Sum =  " << add(n);

    return 0;
}

int add(int a) {
	if(a==1)
	{
		return 1;
	}
    else
    {
    	return a + add(a - 1);
	}
        
    return 0;
}
