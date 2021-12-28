#include<iostream>
using namespace std;
static int max_power(int num,int pow)
{
	int res=1;
	
	while(pow>0)       // let say num =3  ,pow=5;
	                        // 5==>> 1 0 1 in binary..
	                       // now    pow&1 ==1 so res==res*num which is ==3
	                       //  num=3*3=9
	                       // pow >>1 ->> 10 
	                       // pow&1==0 
	                       //num=9*9=81=3^4;
	                       // now pow&1==1
	                       //res=3*num(81)==>3^5 simple 
	{ 
		if((pow&1)!=0)
		{
			res=res*num;
		}
		num=num*num;
		pow=pow>>1;
	}
	return res;
}
int main()
{
	int num,pow;
	cout<<"enter the number and power respectively:"<<endl;
	cin>>num>>pow;
	cout<<max_power(num,pow);
}
