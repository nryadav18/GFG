//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        int n = str1.length() , m = str2.length();
        if (n==2 and str1!=str2) return false; 
        if (n==2 and str1==str2) return true;
        if (str1==str2) return false;
        if (n!=m) return false;
        string res1;
        for (int i=2;i<n;i++){
            res1 += str1[i];
        }
        res1 += str1[0];
        res1 += str1[1];
        if (res1==str2) return true;
        string res2;
        res2 += str1[n-2];
        res2 += str1[n-1];
        for (int i=0;i<n-2;i++){
            res2 += str1[i];
        }
        return res2==str2;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends