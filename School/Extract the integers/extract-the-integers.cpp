//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<string> extractIntegerWords(string s);

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        vector<string> ans = extractIntegerWords(str);
        if(ans.size() == 0)
            cout<<"No Integers";
        else
            for(auto i: ans) cout<<i<<' ';
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


vector<string> extractIntegerWords(string s)
{
    // code here
    int n=s.length();
    vector<string>res;
    string t;
    for (int i=0;i<n;i++){
        if (isdigit(s[i])){
            t+=s[i];
        }
        else if (t!=""){
            res.push_back(t);
            t="";
        }
        else{
            t="";
        }
        if (i==n-1 and t!=""){
            res.push_back(t);
        }
    }
    if (res.size()==0) res.push_back("No Integers");
    return res;
}