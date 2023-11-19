//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    
    string modify (string s)
    {
        // your code here
        int n=s.length();
        if (isupper(s[0])){
            for (int i=1;i<n;i++){
                s[i] = toupper(s[i]);
            }
        }
        else{
            for (int i=1;i<n;i++){
                s[i] = tolower(s[i]);
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
		cout << ob.modify (s) << endl;
	}
}
// } Driver Code Ends