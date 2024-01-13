//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int>up;
        int cnt = 0;
        for (int i=0;i<n;i++) up[arr[i]]++;
        for (int i=0;i<n;i++){
            int diff = k - arr[i];
            if (diff==arr[i]){
                int temp = up[arr[i]];
                cnt += (temp*(temp-1))/2;
                up[arr[i]] = 0;
            }
            else if (up[diff]>0){
                cnt += (up[diff]*up[arr[i]]);
                up[diff] = 0;
                up[arr[i]] = 0;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends