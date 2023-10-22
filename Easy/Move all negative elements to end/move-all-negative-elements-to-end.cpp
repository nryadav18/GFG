//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int N)
    {
        // Your code goes here
        vector<int>pos;
        vector<int>neg;
        for (int i=0;i<N;i++){
            if (arr[i]>=0) pos.push_back(arr[i]);
            else neg.push_back(arr[i]);
        }
        int m=pos.size();
        int n=neg.size();
        for (int i=0;i<m;i++){
            arr[i] = pos[i];
        }
        for (int i=m;i<m+n;i++){
            arr[i] = neg[i-m];
        }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends