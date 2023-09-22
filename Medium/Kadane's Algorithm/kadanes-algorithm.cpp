//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long a[n];
        long long cur_sum = INT_MIN;
        long long tot_sum = INT_MIN;
        for (long long int i=0;i<n;i++){
            a[i] = arr[i];
        }
        for (long long int i=0;i<n;i++){
            cur_sum = max(cur_sum+a[i],a[i]);
            tot_sum = max(tot_sum,cur_sum);
        }
        return tot_sum;
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends