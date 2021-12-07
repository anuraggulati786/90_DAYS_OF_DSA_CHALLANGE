#include <iostream>
using namespace std;

int fib(int n, int a = 1)
{
	if (n == 1)
		return a;
	
	return fib(n - 1,a*n);
}

int main()
{
	int n = 5;
	cout << "fib(" << n << ") = "
		<< fib(n) << endl;
	return 0;
}

