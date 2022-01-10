#include<iostream>
using namespace std;
    
    long long int binary_search(int n) {
        int s=0;
        int e=n;
        long long int mid =s+(e-s)/2;
        int ans=-1;
        while(s<=e) {
            long long int  square=mid*mid;
            
            if(square==n) {
                return mid;
            }
            else if(square>n) {
                
                e=mid-1;
            }
            else{
                ans=mid;
                s=mid+1;
            }
           mid =s+(e-s)/2; 
        }
        
        return ans;
    
        
    }

int main() {
	int n;
	cout<<"enter the number "<<endl;
	cin>>n;
	cout<<binary_search(n);
	
}
