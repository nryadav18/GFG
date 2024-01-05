//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int TotalWays(int N)
	{
	    // Code here
	    long long int a=1,b=1;
	    int mod = 1e9+7;
	    long long int c;
	    while (N--){
	        c = (a+b)%mod;
	        a = b;
	        b = c;
	    }
	    long long int res = (c*c)%mod;
	    return res;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends