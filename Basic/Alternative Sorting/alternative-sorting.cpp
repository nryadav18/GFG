//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{


	public:
	vector<int> alternateSort(int arr[], int N)
	{
	    // Your code goes here
	    vector<int>v;
	    sort(arr,arr+N);
	    if (N==1){
	        v.push_back(arr[0]);
	    } 
	    else{
	        for (int i=0;i<N/2;i++){
    	        v.push_back(arr[N-1-i]);
    	        v.push_back(arr[i]);
    	    }
    	    if (N%2!=0){
    	        v.push_back(arr[N/2]); 
    	    }
	    }
	    
	    return v;
	}
};
	

//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
       	
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
       

        Solution ob;
        vector<int> ans = ob.alternateSort(a, n);
        for(auto i:ans)
        	cout << i << " ";
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends