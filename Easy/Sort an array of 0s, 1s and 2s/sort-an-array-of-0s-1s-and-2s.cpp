//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int zero = count(a,a+n,0);
        int one  = count(a,a+n,1);
        int two  = count(a,a+n,2);
        for (int i=0;i<zero;i++){
            a[i]=0;
        }
        for (int i=zero;i<one+zero;i++){
            a[i]=1;
        }
        for (int i=one+zero;i<two+zero+one;i++){
            a[i]=2;
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends