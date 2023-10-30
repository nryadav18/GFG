//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long int>s;
        s.push(arr[n-1]);
        arr[n-1] = -1;
        for (int i=n-2;i>=0;i--){
            bool flag = false;
            while (!s.empty()){
                long long int t = s.top();
                if (t>arr[i]){
                    s.push(arr[i]);
                    arr[i] = t;
                    flag = true;
                    break;
                }
                else{
                    s.pop();
                }
            }
            if (!flag and s.size()==0){
                s.push(arr[i]);
                arr[i] = -1;
            }
        }
        return arr;
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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends