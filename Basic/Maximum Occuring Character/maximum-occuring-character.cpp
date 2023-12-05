//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        vector<int>v(26,0);
        for (auto i:str) v[i-'a']++;
        //for (auto i:v) cout << i << " ";
        int maxi = *max_element(v.begin(),v.end());
        for (int i=0;i<26;i++) if (v[i]==maxi) return char(i+int('a'));
        return 'a';
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends