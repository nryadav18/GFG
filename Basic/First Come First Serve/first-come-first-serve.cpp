//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int firstElement(int arr[], int n, int k)
    {
        int maxi = *max_element(arr,arr+n);
        int cnt [maxi+1]={0};
        for (int i=0;i<n;i++){
            cnt[arr[i]]++;
        }
        // for (int i=0;i<=maxi;i++){
        //     cout << cnt[i] << " ";
        // }
        for (int i=0;i<n;i++){
            if (cnt[arr[i]]==k){
                return arr[i];
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		cout<<ob.firstElement(a,n,k)<<endl;
	}
	return 0;
}

// } Driver Code Ends