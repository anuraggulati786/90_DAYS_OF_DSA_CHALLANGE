#include<iostream>                    //  10001
using namespace std;                  //  00001  how many f;lips are required to make a to b ..... here answer id 1 ...

int check_first_set_bit(int n){                                    //we find xor of that two number and then we check total set bit present and then 
                                                            //  total set bits are equal to number of flips required 
	int pos=1;                                             
        
        while( !(n & 1)){
        	pos++;
        	n=n>>1;
		}
		           cout<<"you need to flip only "<<pos<<" th bit"<<endl;
}

int xoring(int n1,int n2){
	  check_first_set_bit(n1^n2);                
}

int main(){
	int n1,n2;
	cout<<"enter the number n1 and n2:"<<endl;
	cin>>n1>>n2;
	xoring(n1,n2);
	
}
