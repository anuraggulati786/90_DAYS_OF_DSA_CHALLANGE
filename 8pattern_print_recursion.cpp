#include <iostream>
using namespace std;

// trust helper 
//     1            this is our green box 
//     1 2                ,,
//     1 2 3               ,,
//     1 2 3 4           ,,
//     1 2 3 4 5                    we call for n       for(int i=1;i<n;i++)  { cout<<i<<" "<<endl;}   and then we recursive cal our pattern_print function like this::::->>   pattern_print(n-1);

int pattern_print(int n)
{
    if(n==1)
	{
		cout<<"1"<<" ";
		
	   }   
	   else{
	   
	   	pattern_print(n-1);
	   		cout<<n<<" ";
	   }
	
	
}

int main()
{
	int n;
	cout<<" enter the numbver ;";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		pattern_print(i);
		cout<<endl;
	}
	return 0;
}

