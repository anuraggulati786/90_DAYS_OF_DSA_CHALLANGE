# include<iostream>
using namespace std;
long fact(int n);

int main()
{
	int x;
	cout<<" enter the number :"<<endl;
	cin>>x;
	fact(x);
	cout<<" the facxtorial of the number is ="<<fact(x);
}


long fact(int n)
{
    if(n>=1)
	{
		return (n*fact(n-1));
		}
		else
		{
			return 1;
			}	
}
