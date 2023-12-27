//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int findMidSum(int ar1[], int ar2[], int n) {
            // code here
            vector<int>v(1e6+1,0);
            vector<int>res;
            for (int i=0;i<n;i++){
                v[ar1[i]]++;
                v[ar2[i]]++;
            }
            for (int i=1;i<=1e6;i++){
                if (v[i]!=0){
                    while (v[i]--){
                        res.push_back(i);
                    }
                }
            }
            int size = res.size();
            return res[size/2]+res[(size/2)-1];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends