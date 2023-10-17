//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            string s;
            vector<int>v1(27,0);
            vector<int>v2(27,0);
            int m = A.length(),n = B.length();
            for (int i=0;i<m;i++){
                int temp = A[i] - 97;
                v1[temp]++;
            }
            for (int i=0;i<n;i++){
                int temp = B[i] - 97;
                v2[temp]++;
            }
            for (int i=0;i<27;i++){
                if ((v1[i]==0 and v2[i]!=0) or (v1[i]!=0 and v2[i]==0)){
                    s += char(97+i);
                }
            }
            if (s.length()==0){
                s += '-';
                s += '1';
            }
            return s;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends