//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	string printString(string &S, char ch, int count)
	{
	    // Your code goes here
	    if (count==0) return S;
	    string res;
	    int i,n=S.length();
	    int cnt=0;
	    for (i=0;i<n;i++){
	        if (S[i]==ch){
	            cnt++;
	        }
	        if (cnt==count){
	            i++;
	            break;
	        }
	    }
	    for (int j=i;j<n;j++){
	        res += S[j];
	    }
	    if (res=="") return "Empty string";
	    return res;
	}
};

//{ Driver Code Starts.

int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		char ch;
   		int count;

   		cin >> s >> ch >> count;
   		Solution ob;
   		cout << ob.printString(s, ch, count) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends