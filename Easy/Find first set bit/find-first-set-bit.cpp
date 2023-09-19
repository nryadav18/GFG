//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
        if (n==0) return 0;
        else{
            int i=0;
            vector<int>v;
            while (n>0){
                v.push_back(n%2);
                n/=2;
                i++;
            }
            int ind=0;
            for (int i=0;i<v.size();i++){
                if (v[i]==1){
                    ind = i;
                    break;
                }
            }
            return ind+1;
        }
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
	return 0;
}

// } Driver Code Ends