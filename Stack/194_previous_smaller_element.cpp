// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// naive solution ...
// time : O(N^2)..
// space O(1)...
    //Function to find the next greater element for each element of the array.
    vector<int> previous_smaller(vector<int > arr, int n) {
	int j;
	vector<int> res;
	for(int i=0; i<n; i++) {
		for(j=i-1; j>=0; j--) {
			if(arr[j] < arr[i]) {
				res.push_back(arr[j]);
				break;
			}
		}
		if(j == -1) {
			res.push_back(-1);
		}
	}
	return res;
	
}


// optamized solution using stack ....
// time : O(N)...
// space : O(N)....



    //Function to find the next greater element for each element of the array.
    vector<int> optamized_previous_smaller_element(vector<int> arr, int n){
        // Your code here
        vector<int> ans;
      
	   stack<int> s;
       s.push(-1);
       for(int i=0; i<n; i+=1) {
       	
		int curr = arr[i];
       	while(s.top() >= curr) {
       	s.pop();
		}
		
		int x = (s.empty())?(-1):(s.top());		
		
		ans.push_back(x);
		
		s.push(arr[i]);
		
		
	   }
	
       return ans;
    }


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];

       vector <int> res = previous_smaller(arr, n);
        
        for (long long i : res) cout << i << " ";
        cout<<endl;
    
		vector <int> res1 = optamized_previous_smaller_element(arr, n);
        
        for (long long i : res1) cout << i << " ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
