//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        long long int a=1,b=1;
        long long int c;
        vector<long long int>jyo;
        if (n==1){
            jyo.push_back(a);
        }
        else if (n==2){
            jyo.push_back(a);
            jyo.push_back(b);
        }
        else{
            jyo.push_back(a);
            jyo.push_back(b);
            for (long long int i=2;i<n;i++){
                c = a+b;
                jyo.push_back(c);
                a=b;
                b=c;
            }
            return jyo;
        }
    }
};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends