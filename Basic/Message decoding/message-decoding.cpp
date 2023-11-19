//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

bool decode (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << decode (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


bool decode (string S)
{
    // your code here
    int n=S.length();
    int i=0;
    bool flag;
    flag = false;
    while (i<n){
        if (S[i]=='h'){
            flag = true;
            i++;
            break;
        }
        i++;
    }
    if (!flag) return 0;
    flag = false;
    while (i<n){
        if (S[i]=='e'){
            flag = true;
            i++;
            break;
        }
        i++;
    }
    if (!flag) return 0;
    flag = false;
    while (i<n){
        if (S[i]=='l'){
            flag = true;
            i++;
            break;
        }
        i++;
    }
    if (!flag) return 0;
    flag = false;
    while (i<n){
        if (S[i]=='l'){
            flag = true;
            i++;
            break;
        }
        i++;
    }
    if (!flag) return 0;
    flag = false;
    while (i<n){
        if (S[i]=='o'){
            flag = true;
            i++;
            break;
        }
        i++;
    }
    if (!flag) return 0;
    return 1;
}