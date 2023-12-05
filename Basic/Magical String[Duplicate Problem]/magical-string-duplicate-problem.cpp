//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string magicalString(string S){
        // code here 
        int n=S.length();
        for (int i=0;i<n;i++){
            S[i] = char(int('z')-int(S[i]-'a'));
        }
        return S;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.magicalString(S) << endl;
    }
    return 0; 
} 

// } Driver Code Ends