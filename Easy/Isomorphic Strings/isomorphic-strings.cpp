//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string s1, string s2)
    {
        
        // Your code here
        if (s1.length()!=s2.length()) return 0;
        if (s1==s2) return 1;
        int n=s1.length();
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        for (int i=0;i<n;i++){
            int t1 = s1[i] - 'a';
            int t2 = s2[i] - 'a';
            if (v1[t1]!=v2[t2]){
                return 0;
            }
            v1[t1]=i+1;
            v2[t2]=i+1;
        }
        return 1;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends