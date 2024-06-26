//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int arr[], int n){
        // Code here
        vector<int>v;
        for (int i=0;i<n;i++){
            int maxi = arr[i];
            if (i==n-1){
                v.push_back(arr[i]);
            }
            else{
                for (int j=i+1;j<n;j++){
                    if (arr[j]>maxi){
                        maxi = arr[j];
                    }
                    if (maxi!=arr[i]){
                        break;
                    }
                }
                if (arr[i]==maxi){
                    v.push_back(arr[i]);
                }
            }
        }
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends