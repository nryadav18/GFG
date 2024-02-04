//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    bool check(string s){
        int n = s.length();
        for (int i=1;i<n;i++){
            if (s[i] == s[i-1]){
                return false;
            }
        }
        return true;
    }
    string rremove(string s){
        // code here
        int n = s.length();
        if (n==1) return s;
        if (n==2){
            if (s[0] == s[1]){
                return "";
            }
            return s;
        }
        int i = 0;
        int j = 1;
        string newString;
        while (j<=n){
            bool flag = false;
            while (s[i] == s[j]){
                flag = true;
                j++;
            }
            if (flag){
                i = j;
                j = i+1;
            }
            else{
                newString += s[i];
                i++;
                j = i+1;
            }
        }
        if (check(newString)){
            return newString;
        }
        return rremove(newString);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}
// } Driver Code Ends