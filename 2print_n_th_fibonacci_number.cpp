#include <iostream>
using namespace std;             ///         1 1 2 3 5 8 13 21........
int fun1(int n);                          // 1 st position ,2nd position ........so on ,.
int main() {
	int n ;
	cin>>n;
		cout<<fun1(n);
	
}
int fun1(int n)
{
   
   if (n==1||n==2)
     return 1;
   else 
   return fun1(n-1)+fun1(n-2);
}
