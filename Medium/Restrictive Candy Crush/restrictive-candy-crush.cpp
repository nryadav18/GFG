//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    private:
    bool check(string s,int k){
        bool flag = false;
        int i = 0;
        int j = 1;
        int n = s.length();
        while (j<=n){
            while (s[i] == s[j]){
                if (j-i+1==k){
                    return false;
                }
                j++;
            }
            i++;
            j = i+1;
        }
        return true;
    }
    public:
    string Reduced_String(int k,string s){
        // Your code goes here
        if (k==1) return "";
        int i = 0;
        int j = 1;
        int n = s.length();
        string newString;
        while (j<=n){
            bool flag = false;
            while (s[i] == s[j]){
                if (j-i+1==k){
                    flag = true;
                    break;
                }
                j++;
            }
            if (flag){
                i = j+1;
                j = i+1;
            }
            else{
                newString += s[i];
                i++;
                j = i+1;
            }
        }
        if (check(newString,k)) return newString;
        return Reduced_String(k,newString);
    }


};

//{ Driver Code Starts.

int main() {
    
    
    int t;cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.Reduced_String(k,s)<<"\n";
        
    }
    
	return 0;
}
// } Driver Code Ends