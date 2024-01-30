//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    
public:
    vector<int>v;
    void recCall(long long int n){
        if (n==1){
            v.push_back(n);
            return ;
        }
        v.push_back(n);
        if (n%2==0){
            n = int(sqrt(n));
            recCall(n);
        }
        else{
            n = pow(n,3);
            n = sqrt(n);
            recCall(n);
        }
    }
    vector<int> jugglerSequence(int N){
        // code here
        recCall(N);
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
        vector<int> ans = ob.jugglerSequence(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends