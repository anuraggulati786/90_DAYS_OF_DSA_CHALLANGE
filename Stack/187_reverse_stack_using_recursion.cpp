// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;






//***********without recursion *************//

// time : O(N)...
// space : O(N)...
class Solution{
public:
    vector<int> Reverse(stack<int> St){
        vector<int> rev;
        while(St.empty() != 1) {
            rev.push_back(St.top());
            St.pop();
        }
        return rev;
    }
};






 // } Driver Code Ends
//User function Template for C++
//****************************************USING RECURSION *****************
// TIME : O(N)>>>>
// SPACE : O(N)>>>>
class Solution{
public:
    void insert_at_bottom(stack<int> &St,int x){
        if(St.size()==0){
            St.push(x);
        }
        else{
            int y=St.top();
            St.pop();
            insert_at_bottom(St,x);
            St.push(y);
        }
    }
    void fun(stack<int> &St){
        if(St.size()>0){
            int x=St.top();
            St.pop();
            fun(St);
            insert_at_bottom(St,x);
        }
    }
    vector<int> Reverse(stack<int> St){
        fun(St);
        vector<int> ans;
        while(St.size() > 0){
            ans.push_back(St.top());
            St.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        vector<int> ans=ob.Reverse(St);
        for(int i=0;i<N;i++){
            cout<<ans[i];
            if(i!=N-1) cout<<" ";
        }
        cout<<endl;
    }
}  // } Driver Code Ends
