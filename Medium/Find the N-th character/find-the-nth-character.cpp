//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        //code here
        string res;
        while (r--){
            res = "";
            for (auto it : s){
                if (it == '0'){
                    res += "01";
                }
                else{
                    res += "10";
                }
                if (res.length() > s.size()){
                    break;
                }
            }
            s = res;
        }
        return s[n]; 
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
// } Driver Code Ends