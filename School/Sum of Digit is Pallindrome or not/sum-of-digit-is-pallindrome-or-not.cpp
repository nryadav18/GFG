//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
    private:
        bool isp(int n){
            int t = n;
            int s=0;
            while (n!=0){
                int temp = n%10;
                s = (s*10)+temp;
                n/=10;
            }
            if (t==s) return true;
            else return false;
        }
  public:
    int isDigitSumPalindrome(int N) {
        // code here
        int s=0;
        while(N!=0){
            int temp = N%10;
            s+=temp;
            N/=10;
        }
        if (isp(s)) return 1;
        else return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends