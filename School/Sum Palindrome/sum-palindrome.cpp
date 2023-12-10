//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
    private:
    long long rev(long long n){
        long long r=0;
        while (n){
            r = (r*10)+(n%10);
            n /= 10;
        }
        return r;
    }
  public:
    long long isSumPalindrome(long long n){
        // code here
        for (int i=0;i<5;i++){
            if (n==rev(n)) return n;
            n=n+rev(n);
            if (n==rev(n)) return n;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution ob;
        cout<<ob.isSumPalindrome(n)<<endl;
    }
    return 0;
}

// } Driver Code Ends