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
    
    
    double factor( double  ans ,int k,int n) {
    	double factr=1;
    	for(int i=0;i<k;i++) {
    		factr=factr/10;
    		
    		for(double j=ans;j*j< n ;j=j+factr ) {
    			ans =j;
			}
		}
		return ans ;
	}
    

int main() {
	int n;
	cout<<"enter the number "<<endl;
	cin>>n;
	double ans=binary_search(n);
	int k;
	cout<<"enter the precision you wants "<<endl;
	cin>>k;
	cout<<factor( ans ,k, n);

	
}
