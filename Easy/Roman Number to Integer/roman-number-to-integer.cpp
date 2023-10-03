//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        unordered_map<char,int>up;
        up['I']=1;
        up['V']=5;
        up['X']=10;
        up['L']=50;
        up['C']=100;
        up['D']=500;
        up['M']=1000;
        int res=0;
        for (int i=0;i<str.length();i++){
            if (up[str[i]] < up[str[i+1]]){
                res-=up[str[i]];
            }
            else{
                res+=up[str[i]];
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends