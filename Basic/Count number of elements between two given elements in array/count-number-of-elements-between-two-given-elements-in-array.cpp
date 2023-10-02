//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int getCount(int arr[], int n, int num1, int num2)
    {
        //Complete the function 
        int l=0,h=0;
        for (int i=0;i<n;i++){
            if (arr[i]==num1){
                l=i;
                break;
            }
        }
        for (int i=n-1;i>=0;i--){
            if (arr[i]==num2){
                h=i;
                break;
            }
        }
        if (h==l) return 0;
        return h-l-1;
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
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int num1,num2;
	    cin>>num1>>num2;
	    Solution ob;
	    cout << ob.getCount(a, n, num1, num2) <<"\n";
	}
	return 0;
}

// } Driver Code Ends