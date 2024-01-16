//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Your code goes hereclass Solution{
	
class Solution{
	public:
	void sortedMerge(int a[], int b[], int res[],int n, int m)
	{
	   // Your code goes here
	   sort(a,a+n);
	   sort(b,b+m);
	   int i=0;
	   int j=0;
	   vector<int>final;
	   while (i<n and j<m){
	       if (a[i]==b[i]){
	           final.push_back(a[i]);
	           final.push_back(b[j]);
	           i++;
	           j++;
	       }
	       else if (a[i]<b[j]){
	           final.push_back(a[i]);
	           i++;
	       }
	       else{
	           final.push_back(b[j]);
	           j++;
	       }
	   }
	   if (i<n){
	       while (i<n){
	           final.push_back(a[i]);
	           i++;
	       }
	   }
	   if (j<m){
	       while (j<m){
	           final.push_back(b[j]);
	           j++;
	       }
	   }
	   for (int k=0;k<m+n;k++){
	       res[k] = final[k];
	   }
	}
};
	  


//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }

	    for(int i = 0;i<m;i++){
	        cin >> b[i];
	    }
	    
	    int res[n+m];

      
        Solution ob;
        ob.sortedMerge(a,b,res,n,m);

        for(int i = 0;i<n+m;i++){
	        cout << res[i] << " ";
	    }
	   
        
	    cout << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends