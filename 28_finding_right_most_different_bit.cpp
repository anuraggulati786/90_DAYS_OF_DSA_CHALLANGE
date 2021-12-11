#include <bits/stdc++.h>
using namespace std;

int getRightMostSetBit(int n)
{
	if (n == 0)
		return 0;
	
	return (n & -n) + 1;
}

int posOfRightMostDiffBit(int m, int n)
{
	return getRightMostSetBit(m ^ n);
}

int main()
{
	int m , n ;
	cout<<"enter the value of m and n respectively :"<<endl;
    cin>>m>>n;
	cout << "Position of rightmost different bit:"
		<< posOfRightMostDiffBit(m, n)<<endl;
	return 0;
}

