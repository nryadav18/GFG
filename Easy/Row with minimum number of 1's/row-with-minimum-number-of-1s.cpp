//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minRow(int N, int M, vector<vector<int>> A) {
        // code here
        int loc_cnt=0;
        int tot_cnt=M;
        int ind=1;
        for (int i=0;i<N;i++){
            loc_cnt=0;
            for(int j=0;j<M;j++){
                if (A[i][j]==1){
                    loc_cnt++;
                }
            }
            if (loc_cnt<tot_cnt){
                ind = i+1;
            }
            tot_cnt = min(tot_cnt,loc_cnt);
        }
        return ind; 
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }
        Solution ob;
        cout << ob.minRow(N, M, A) << "\n";
    }
}
// } Driver Code Ends