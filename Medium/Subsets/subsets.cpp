//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    private:
    void Subsets(vector<int>A,int ind,vector<int>res,int n,vector<vector<int>>&dp){
        if (ind==n){
            dp.push_back(res);
            return ;
        }
        res.push_back(A[ind]);
        Subsets(A,ind+1,res,n,dp);
        res.pop_back();
        Subsets(A,ind+1,res,n,dp);
    }
    public:
    vector<vector<int> > subsets(vector<int>& A)
    {
        //code here
        vector<vector<int>>dp;
        int n = A.size();
        Subsets(A,0,{},n,dp);
        sort(dp.begin(),dp.end());
        return dp;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}
// } Driver Code Ends