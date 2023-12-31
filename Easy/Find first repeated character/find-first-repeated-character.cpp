//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    int n=s.length();
    vector<int>v(27,0);
    for (int i=0;i<n;i++){
        int ind = int(s[i]-'a')+1;
        v[ind]++;
        if (v[ind]==2){
            string res;
            res += s[i];
            return res;
        }
    }
    return "-1";
}