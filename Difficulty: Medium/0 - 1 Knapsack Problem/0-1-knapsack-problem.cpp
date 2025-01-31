//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#define ll long long

class Solution {
  public:
  
    int FindMyKnapSack(int i, int n, vector<int>&val, vector<int>&wt, int maxWt,
    int dp[1001][1001]){
        if (i >= n){
            return 0;
        }
        if (dp[i][maxWt] != -1){
            return dp[i][maxWt];
        }
        int pick = 0, unPick = 0;
        if (wt[i] <= maxWt){
            pick = val[i] + FindMyKnapSack(i+1, n, val, wt, maxWt-wt[i], dp);
        }
        unPick = FindMyKnapSack(i+1, n, val, wt, maxWt, dp);
        dp[i][maxWt] = max(pick, unPick);
        return dp[i][maxWt];
    }
  
    // Function to return max value that can be put in knapsack of capacity.
    int knapSack(int capacity, vector<int> &val, vector<int> &wt) {
        // code here
        //Recursiion-2D-DP
        int dp[1001][1001];
        memset(dp,-1,sizeof(dp));
        int result = FindMyKnapSack(0, val.size(), val, wt, capacity, dp);
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    // Taking total test cases
    int testCases;
    cin >> testCases;
    cin.ignore();
    while (testCases--) {
        // Reading number of items and capacity
        int numberOfItems, capacity;
        vector<int> weights, values;
        string input;
        int number;

        // Read capacity and number of items
        getline(cin, input);
        stringstream ss(input);
        ss >> capacity;      // The first number is the capacity
        ss >> numberOfItems; // The second number is the number of items

        // Read values
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            values.push_back(number);
        }

        // Read weights
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            weights.push_back(number);
        }

        Solution solution;
        cout << solution.knapSack(capacity, values, weights) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends