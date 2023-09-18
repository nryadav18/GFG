//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int binary_to_decimal(string str) {
        // Code here.
        long long int cnt=0;
        reverse(str.begin(),str.end());
        long long int i;
        for (i=0;i<str.length();i++){
            if (str[i]=='1'){
                cnt+=pow(2,i);
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.binary_to_decimal(str);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends