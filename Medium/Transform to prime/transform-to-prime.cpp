//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    private:
    bool isprime(int n){
        if (n<=1) return false;
        if (n==2 or n==3) return true;
        if (n%2==0 or n%3==0) return false;
        for (int i=5;i*i<=n;i+=6){
            if (n%i==0 or n%(i+2)==0){
                return false;
            }
        }
        return true;
    }
    public:
    int minNumber(int arr[],int n)
    {
        int sum = accumulate(arr,arr+n,0);
        bool flag = false;
        if (isprime(sum)) return 0;
        int temp = sum;
        while (1){
            if (isprime(sum)){
                break;
            }
            else{
                sum++;
            }
        }
        return sum-temp;
    }
};


//{ Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minNumber(arr, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends