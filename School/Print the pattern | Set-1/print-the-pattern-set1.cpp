//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void printPat(int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
    printPat(n);
    cout<<endl;
	}
}
// } Driver Code Ends


/*You are required to complete this method*/
void printPat(int n)
{
//Your code here
for (int i=n;i>=1;i--){
    for (int j=n;j>=1;j--){
        for (int k=i;k>=1;k--){
            cout << j << " ";
        }
    }
    cout << "$";
}
}