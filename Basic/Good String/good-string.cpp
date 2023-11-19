//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string isGoodString(string s);
int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	       string s;
	       cin>>s;
	       cout<<isGoodString(s)<<endl;
	    }
}	    
	    
// } Driver Code Ends


string isGoodString(string s)
{
    //code here.
    int n=s.length();
    for (int i=1;i<n;i++){
        if ((s[i]=='a' and s[i-1]=='z') or (s[i]=='z' and s[i-1]=='a')){
            continue;
        }
        if (abs(s[i]-s[i-1])!=1){
            return "NO";
        } 
    }
    return "YES";
}