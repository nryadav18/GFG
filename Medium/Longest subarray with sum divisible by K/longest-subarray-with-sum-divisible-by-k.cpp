//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    int max_len = 0;
	    int sum = 0;
	    unordered_map<int,int>mp;
	    mp[0]=-1;
	    //int val;
	    for(int i=0;i<n;i++){
	        sum += arr[i];
	        int val = ((sum%k)+k)%k;
	        if (val==0){
	            max_len = i+1;
	        }
	        if (mp.find(val)==mp.end()){
	            mp[val] = i;
	        }
	        else{
	            max_len = max(max_len,i-mp[val]);
	           // mp[val] = i;
	        }
	    }
	   // for (auto it:mp){
	   //     cout << it.first << " " << it.second << endl;
	   // }
	    return max_len;
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends