//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        // code here
        if (N==0) return -1;
        int ind = -1;
        int cnt=0;
        int i = 0;
        while (N>0){
            if((N&1)==1){
                cnt++;
                ind = i;
            }
            i++;
            N = N >> 1;
        }
        if (cnt==1){
            return ind+1;
        }
        else{
            return -1;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends