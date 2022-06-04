// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string str){
		    // Code here
		    
		    unordered_map<char,int> count;
		    
		    queue<int> q;
		    
		    string result = "";
		    
		    int n = str.length();
		    
		    for(int i=0; i<n; i++) {
		        
		        count[str[i]]++;
		        
		        q.push(str[i]);
		        
		        while(!q.empty()) {
		            
		            if(count[q.front()] > 1) {
		                q.pop();
		            }
		            else {
		                result.push_back(q.front());
		                break;
		            }
		        }
		        
		        if(q.empty()) {
		            result.push_back('#');
		        }
		        
		      
		    }
		    return result;
		  
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
