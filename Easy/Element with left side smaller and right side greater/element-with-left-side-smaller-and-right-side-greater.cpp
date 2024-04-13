//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends

int findElement(int arr[], int n) {
    vector<int>left,right;
    int lmax = arr[0] , rmin = arr[n-1];
    for (int i=0;i<n;i++){
        if (arr[i] > lmax){
            lmax = arr[i];
        }
        left.push_back(lmax);
    }
    for (int i=n-1;i>=0;i--){
        if (arr[i] < rmin){
            rmin = arr[i];
        }
        right.push_back(rmin);
    }
    reverse(right.begin(),right.end());
    // for (auto it : left) cout << it << " ";
    // cout << endl;
    // for (auto it : right) cout << it << " ";
    // cout << endl;
    for (int i=1;i<n-1;i++){
        if (left[i] <= arr[i] and arr[i] <= right[i]){
            return arr[i];
        }
    }
    return -1;
}