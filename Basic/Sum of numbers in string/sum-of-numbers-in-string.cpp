//{ Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	// Your code here
    	int n=str.length();
    	int val = 0;
    	int arr[n]={0};
    	int ind = 0;
    	for (int i=0;i<n;i++){
    	    if (isdigit(str[i])){
    	        val = (val*10)+(str[i]-'0');
    	    }
    	    else if (isalpha(str[i]) and val!=0){
    	        arr[ind++] = val;
    	        val = 0;
    	    }
    	    if (i==n-1 and val!=0){
    	        arr[ind++] = val;
    	    }
    	}
    	int s=0;
    	for (auto i:arr) s+=i;
    	return s;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}

// } Driver Code Ends