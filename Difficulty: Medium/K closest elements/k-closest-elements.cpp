//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        // code here
        int low = lower_bound(arr.begin(),arr.end(),x)-arr.begin();
        int upp = upper_bound(arr.begin(),arr.end(),x)-arr.begin();
        int i = low - 1, j = upp;
        vector<int>result;
        while (k and i >= 0 and j<n){
            if (x - arr[i] < arr[j] - x){
                result.push_back(arr[i--]);
            }
            else{
                result.push_back(arr[j++]);
            }
            k--;
        }
        while (k and i >= 0){
            result.push_back(arr[i--]);
            k--;
        }
        while (k and j < n){
            result.push_back(arr[j++]);
            k--;
        }
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends