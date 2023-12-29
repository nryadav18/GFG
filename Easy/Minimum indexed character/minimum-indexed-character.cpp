//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        // Your code here
        int n=str.length();
        vector<int>v(27,0);
        for (auto i:patt){
            int ind = int(i-'a')+1;
            v[ind]++;
        }
        for (int i=0;i<n;i++){
            int ind = int(str[i]-'a')+1;
            if (v[ind]!=0){
                return i;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}

// } Driver Code Ends