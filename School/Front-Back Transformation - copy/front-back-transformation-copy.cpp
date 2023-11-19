//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string convert(string a);
int main()
{
    int t;
    cin>>t;
    while(t--)
        {
            string s;
            cin>>s;
            string ans=convert(s);
            cout<<ans<<endl;
            
        }
}

// } Driver Code Ends


string convert(string s)
{
    // code here.
    int n=s.length();
    for (int i=0;i<n;i++){
        if (isupper(s[i])){
            int diff = s[i] - 'A';
            char ch = char(int('Z') - diff);
            s[i] = ch;
        }
        else{
            int diff = s[i] - 'a';
            char ch = char(int('z') - diff);
            s[i] = ch;
        }
    }
    return s;
}