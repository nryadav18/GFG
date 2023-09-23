//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long arr[], int n) {
        long long int tot_sum = 0;
        for (long long int i=0;i<n;i++){
            tot_sum += arr[i];
        }
        long long int fir_sum = 0;
        for (long long int i=0;i<n;i++){
            fir_sum += arr[i];
            if (fir_sum - arr[i] == tot_sum - arr[i]){
                return i+1;
            }
            tot_sum = tot_sum - arr[i];
        }
        return -1;
        // Your code here
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends