//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        // code here
        long long maxi = *max_element(arr,arr+n);
        vector<int>v(maxi+1,0);
        vector<int>res;
        for (int i=0;i<n;i++){
            v[arr[i]]++;
        }
        for (int i=0;i<=maxi;i++){
            if (v[i]>=2){
                res.push_back(i);
            }
        }
        if (res.size()==0) res.push_back(-1);
        return res;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends