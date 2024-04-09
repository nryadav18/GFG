//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int K) {
        // Your code goes here
        int n = arr.size();
        sort(arr.begin(),arr.end());
        set<vector<int>>sov;
        for (int i = 0 ; i < n ; i++){
            for (int j = i+1 ; j < n ; j++){
                int k = j + 1;
                int l = n - 1;
                while (k<l){
                    int sum = arr[i]+arr[j]+arr[k]+arr[l];
                    if (sum == K){
                        sov.insert({arr[i],arr[j],arr[k],arr[l]});
                        k++;
                    }
                    else if (sum < K){
                        k++;
                    }
                    else{
                        l--;
                    }
                }
            }
        }
        vector<vector<int>>v;
        for (auto it : sov){
            v.push_back(it);
        }
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends