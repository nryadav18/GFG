//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int>>matrix, int n, int m) 
    {
        // code here
        vector<int>v;
        if (m==1){
            for (int i=0;i<n;i++){
                int j=0;
                v.push_back(matrix[i][j]);
            }
        }
        else if (n==1){
            for (int j=0;j<m;j++){
                int i=0;
                v.push_back(matrix[i][j]);
            }
        }
        else{
            for (int j=0;j<m;j++){
                int i=0;
                v.push_back(matrix[i][j]);
            }
            //return v;
            for (int i=1;i<n-1;i++){
                int j=m-1;
                v.push_back(matrix[i][j]);
            }
            //return v;
            for (int j=m-1;j>=0;j--){
                int i=n-1;
                v.push_back(matrix[i][j]);
            }
            //return v;
            for (int i=n-2;i>=1;i--){
                int j=0;
                v.push_back(matrix[i][j]);
            }
        }
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix, n, m);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends