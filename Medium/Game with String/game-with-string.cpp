//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        unordered_map<char,int>mp;
        for (auto it:s){
            mp[it]++;
        }
        vector<int>v;
        for (auto it:mp){
            v.push_back(it.second);
        }
        while (k!=0){
            sort(v.begin(),v.end());
            int val = v.back();
            v.pop_back();
            v.push_back(val-1);
            k--;
        }
        int sum = 0;
        for (auto it:v){
            sum += (it*it);
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends