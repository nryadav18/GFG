//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    // your code here
    int i = 0 , j = 0 , maxLength = 1 , n = s.length();
    unordered_map<char,int>up;
    while (j<n){
        if (up.find(s[j]) == up.end()){
            up[s[j]]++;
            if (maxLength < j-i+1){
                maxLength = j-i+1;
                //cout << i << " " << j << endl;
            }
        }
        else{
            while (i<j and s[i] != s[j]){
                up[s[i]]--;
                if (up[s[i]] == 0){
                    up.erase(s[i]);
                }
                i++;
            } 
            i++;
        }
        j++;
    }
    return maxLength;
}