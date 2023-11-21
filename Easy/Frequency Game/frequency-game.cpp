//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        // code here
        int maxi = *max_element(arr,arr+n);
        vector<int>v(maxi+1,INT_MAX);
        for (int i=0;i<n;i++){
            if (v[arr[i]]==INT_MAX){
                v[arr[i]] = 1;
            }
            else{
                v[arr[i]]++;
            }
        }
        //for (auto i:v) cout << i << " ";
        int mini = *min_element(v.begin(),v.end());
        for (int i=maxi;i>=0;i--){
            if (v[i]==mini){
                return i;
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends