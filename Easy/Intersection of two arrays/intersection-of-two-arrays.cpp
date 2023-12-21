//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int arr[], int brr[], int n, int m) {
        // Your code goes here
        unordered_map<int,int>um;
        int cnt=0;
        for (int i=0;i<n;i++) if (um[arr[i]]==0) um[arr[i]]=1;
        for (int i=0;i<m;i++) if (um[brr[i]]==1) um[brr[i]]=2;
        for (auto it:um){
            if (it.second==2){
                cnt++;
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
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends