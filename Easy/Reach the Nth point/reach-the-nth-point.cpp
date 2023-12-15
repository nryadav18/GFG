//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		int nthPoint(int n){
		    // Code here
		    if (n==1 or n==2 or n==3) return n;
		    int res;
		    int a=2;
		    int b=3;
		    int mod = 1e9+7;
		    for (int i=3;i<n;i++){
		        res = (a+b)%mod;
		        a = b;
		        b = res;
		    }
		    return res;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends