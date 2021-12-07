#include <iostream>
using namespace std;

// trust helper 
//     1 2 3 4 5     we call for n       for(int i=1;i<n;i++)  { cout<<i<<" "<<endl;}   and then we recursive cal our pattern_print function like this::::->>   pattern_print(n-1);
//     1 2 3 4             this is our green box 
//     1 2 3               ,,
//     1 2                 ,,
//     1                   ,,
//     1 2                 ,, 
//     1 2 3               ,,
//     1 2 3 4             ,,
//     1 2 3 4 5      here also we call onr our fxn again 
  
int pattern_print(int n)
{       
         if(n==1)
          {
	     cout<<"1"<<" "<<endl;
          }
          
          else{
	            for(int i=1;i<=n;i++)
                  	{
               		cout<<i<<" ";
	                  }
	                  cout<<endl;
	
                  pattern_print(n-1);
                      
                     
                  
                    for(int i=1;i<=n;i++)
                  	{
               		cout<<i<<" ";
	                  }
	                  cout<<endl;
}
	
}

int main()
{
	int n;
	cout<<" enter the numbver :";
	cin>>n;
	pattern_print(n);
	return 0;
}

