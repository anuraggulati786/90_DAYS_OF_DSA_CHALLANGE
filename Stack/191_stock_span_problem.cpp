// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
 
 // NAIVE SOLUTION >>>>>>>>>>>>>>>>
 
// time :  O(N^2)...............)
 
 void printSpan(int arr[],int n){
    for(int i=0;i<n;i++){
        int span=1;
        for(int j=i-1;j>=0&&arr[j]<=arr[i];j--)
            span++;
        cout<<span<<" ";
    }    
}

 
 
 

// optamized code : Time : O(N)...
// space : O(N)...
class Solution
{
    public:
    //Function to calculate the span of stock’s price for all n days.
    vector <int> calculateSpan(int arr[], int n)
    {
       vector<int> res;
       
       stack<int> s;
       s.push(0);
       res.push_back(1);
       for(int i=1; i<n; i++) {
           
           while(s.empty() == false && arr[i] >= arr[s.top()]) {
               s.pop();
           }
           
           int span = s.empty() ? i+1 : i-s.top();
           
           res.push_back(span);
           
           s.push(i);
       }
       
       return res;
     
    }
};



// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends
