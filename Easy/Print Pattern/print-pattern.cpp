//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
private:
    void back(vector<int>&v,int n,int c){
        //if (c==1) return;
        //if (n==0) return;
        if (n<=0) return;
        v.push_back(n);
        n-=5;
        back(v,n,c);
        v.push_back(n);
    }
public:
    vector<int> pattern(int N){
        // code here
        int t = N;
        vector<int>v;
        back(v,N,0);
        if (v.size()!=1) v.push_back(N);
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends