//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        if (N==1 or N==2 or N==3 or N==4 or N==5) return 0;
        long long res=0;
        long long t = ceil(sqrt(N));
        int temp;
        for (int i=1;i<=t;i++){
            if (N%i==0){
                res += i;
                temp = i;
            }
        }
        if (res==N) return 1;
        if (N/res==temp) return 1;
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends