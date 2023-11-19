//{ Driver Code Starts
// Driver function
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string reciprocalString(string S)
    {
        // Write Your code here
        int n=S.length();
        for (int i=0;i<n;i++){
            if (isupper(S[i])){
                int diff = S[i] - 'A';
                char ch = char(int('Z')-diff);
                S[i] = ch;
            }
            else if (islower(S[i])){
                int diff = S[i] - 'a';
                char ch = char(int('z')-diff);
                S[i] = ch;
            }
        }
        return S;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    string S;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,S);
        Solution ob;
        string reciprocal = ob.reciprocalString(S);
        cout<< reciprocal <<endl;

    }

	return 0;
}
// } Driver Code Ends