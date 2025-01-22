//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstring(string &s) {
        // code
        int i = 0, j = 0, cnt = 0, n = s.length();
        vector<int>indexes(26,-1);
        while (j < n){
            i = max(i,indexes[s[j] -'a']+1);
            cnt = max(cnt, j-i+1);
            indexes[s[j] -'a'] = j;
            j++;
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.longestUniqueSubstring(str) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends