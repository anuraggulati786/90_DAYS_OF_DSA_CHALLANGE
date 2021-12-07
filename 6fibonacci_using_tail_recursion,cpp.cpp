#include <iostream>
using namespace std;

int fib(int n, int a = 0,int b=1)
{
	if (n == 1)
		return a;
		if(n==2)
		return b;
	
	return fib(n - 1,b,a+b);
}

int main()
{
	int n = 5;
	cout << "fib(" << n << ") = "
		<< fib(n) << endl;
	return 0;
}

