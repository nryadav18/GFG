//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    private:
    
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        if (s1==s2) return 1;
        int n=s1.length();
        if (n==1) return false;
        if (n==2 and s1[0]==s2[1] and s1[1]==s2[0]) return true;
        if (n==2 and s1[0]!=s2[1] and s1[1]!=s2[0]) return false;
        string res;
        for (auto i:s2) res += i;
        for (auto i:s2) res += i;
        if (res.find(s1)<n) return 1;
        return 0;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends