//{ Driver Code Starts
 

#include<bits/stdc++.h>
using namespace std;
 
int findDuplicate(int a[]);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int A[10];
		for(int i=0;i<10;i++)
		cin>>A[i];
		
		cout<<findDuplicate(A)<<endl;
	}
}
// } Driver Code Ends


    

int findDuplicate(int arr[])
{
    // Your code goes here
    if (arr[0]==arr[1]){
        return arr[0];
    }
    else if (arr[1]==arr[2]){
        return arr[1];
    }
    else if (arr[2]==arr[3]){
        return arr[2];
    }
    else if (arr[3]==arr[4]){
        return arr[3];
    }
    else if (arr[4]==arr[5]){
        return arr[4];
    }
    else if (arr[5]==arr[6]){
        return arr[5];
    }
    else if (arr[6]==arr[7]){
        return arr[6];
    }
    else if (arr[7]==arr[8]){
        return arr[7];
    }
    else{
        return arr[8];
    }
}