//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        if (m == n) return -1;
        int cnt = 0;
        while (m != 0 and n != 0){
            int a,b;
            if (m&1) a = 1;
            else a = 0;
            if (n&1) b = 1;
            else b = 0;
            if (a!=b) return cnt+1;
            else cnt++;
            m >>= 1;
            n >>= 1;
        }
        return cnt+1;
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         Solution ob;
         cout << ob.posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
} 
// } Driver Code Ends