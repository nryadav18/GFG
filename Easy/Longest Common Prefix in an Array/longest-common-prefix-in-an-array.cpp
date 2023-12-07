//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int n)
    {
        // your code here
        string s;
        int mini=1e4;
        for (int i=0;i<n;i++){
            if (arr[i].length()<mini){
                mini = arr[i].length();
                s = arr[i];
            }
        }
        string res;
        bool flag = true;
        for (int i=0;i<mini;i++){
            for (int j=0;j<n;j++){
                string temp = arr[j];
                if (s[i]!=temp[i]){
                    flag = false;
                    break;
                }
            }
            if (!flag) break;
            res += s[i];
        }
        if (res=="") res = "-1";
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends