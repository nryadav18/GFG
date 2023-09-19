//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int countZeroes(int arr[], int n) {
        // code here
        int cnt=0;
        if(n==0) return cnt;
        else if (n==1 and arr[0]==1) return cnt;
        else if (n==1 and arr[0]==0){
            cnt = 1;
            return cnt;
        }
        else{
            if (arr[0]==arr[n-1] and arr[0]==0){
                cnt = n;
            }
            else if (arr[0]==arr[n-1] and arr[0]==1){
                cnt = 0;
            }
            else{
                for (int i=n-1;i>=0;i--){
                    if (arr[i]==1){
                        break;
                    }
                    cnt++;
                }
                return cnt;
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends