//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string transform(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << transform(s) << endl;
    }
return 0;
}


// } Driver Code Ends


string transform(string S){
    //complete the function here
    int n=S.length();
    int i;
    for (i=0;i<n;i++){
        S[i] = tolower(S[i]);
    }
    i=0;
    string res;
    while (i<n){
        int j=i+1;
        int c=1;
        while (j<n){
            if (S[i]!=S[j]) break;
            else c++;
            j++;
        }
        res += to_string(c);
        res += S[i];
        i=j;
    }
    return res;
}

