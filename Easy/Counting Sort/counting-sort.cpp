//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr){
        // code here
        vector<int>v(26,0);
        for (auto i : arr){
            v[i-'a']++;
        }
        string res;
        for (int i=0;i<26;i++){
            if (v[i]==1){
                res += char(i+int('a'));
            }
            else if (v[i]>=2){
                int t = v[i];
                while (t--){
                    res += char(i+int('a'));
                }
            }
        }
        return res;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    }
    return 0;
}

// } Driver Code Ends