//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        vector<int>left_max,right_max;
        int maxi = INT_MIN;
        for (int i=0;i<n;i++){
            maxi = max(maxi,arr[i]);
            left_max.push_back(maxi);
        }
        maxi = INT_MIN;
        for (int i=n-1;i>=0;i--){
            maxi = max(maxi,arr[i]);
            right_max.push_back(maxi);
        }
        long long res = 0;
        for (int i=0;i<n;i++){
            int mini = min(left_max[i],right_max[n-1-i]);
            res += mini - arr[i];
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends