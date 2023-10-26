//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int minOperation(int n)
    {
        //code here.
        if (n==1) return 1;
        else if (n==2) return 2;
        else{
            int cnt=0;
            while (n!=0){
                if (n%2==0) n/=2;
                else n-=1;
                cnt++;
            }
            return cnt;
        }
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
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    }
}
// } Driver Code Ends