//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    private:
        bool check(char ch){
            if (ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u') return true;
            if (ch=='A' or ch=='E' or ch=='I' or ch=='O' or ch=='U') return true;
            return false;
        }
    public:
        string modify (string s)
        {
            //code here.
            int i=0;
            int j=s.length()-1;
            while (i<j){
                if (check(s[i]) and check(s[j])){
                    swap(s[i],s[j]);
                    i++;
                    j--;
                }
                else if (!check(s[i])){
                    i++;
                }
                else{
                    j--;
                }
            }
            return s;
        }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends