//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> getMoreAndLess(int arr[], int n, int x) {
	    // code here
	    vector<int>v;
	    int cnt1=0,cnt2=0;
	    for (int i=0;i<n;i++){
	        if (arr[i]>x){
	            break;
	        }
	        cnt1++;
	    }
	    for (int j=n-1;j>=0;j--){
	        if (arr[j]<x){
	            break;
	        }
	        cnt2++;
	    }
	    v.push_back(cnt1);
	    v.push_back(cnt2);
	    return v;
	    //jyothi_naa_bangaram
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMoreAndLess(arr, n, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}

// } Driver Code Ends