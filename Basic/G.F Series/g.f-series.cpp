//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long funCall(long long n){
        if (n==1){
            return 0;;
        }
        else if (n==2){
            return 1;
        }
        else{
            long long res = (funCall(n-2)*funCall(n-2)-funCall(n-1));
            return res;
        }
    }
    void gfSeries(int n)
    {
        // Write Your Code here
        for (long long int i=1;i<=n;i++){
            long long res =  funCall(i);
            cout << res << " ";
        }
        cout << endl;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        ob.gfSeries(N);
    }
    return 0;
}
// } Driver Code Ends