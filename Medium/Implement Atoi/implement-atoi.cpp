//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
  
    int atoi(string s) {
        //Your code here
        int n = s.length();
        bool flag = false;
        long long int val = 0;
        if (s[0] == '-'){
            flag = true;
        }
        for (int i=0;i<n;i++){
            if (isdigit(s[i])){
                val = (val*10)+(s[i]-'0');
            }
            else if (i!=0){
                return -1;
            }
        }
        if (flag) return 0-val;
        return val;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends