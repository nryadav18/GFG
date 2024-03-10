//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string s) {
	    // code here
	    vector<int>Upper(26,0),Lower(26,0);
	    int n=s.length();
	    for (int i=0;i<n;i++){
	        if (s[i] >= 'a' and s[i] <= 'z'){
	            Lower[s[i] - 'a']++;
	        }
	        else{
	            Upper[s[i] - 'A']++;
	        }
	    }
	    string res;
	    for (int i=0;i<n;i++){
	        if (s[i] >= 'a' and s[i] <= 'z' and Lower[s[i] - 'a'] > 0){
	            res += s[i];
	            Lower[s[i] - 'a'] = 0;
	        }
	        else if (s[i] >= 'A' and s[i] <= 'Z' and Upper[s[i] - 'A'] > 0){
	            res += s[i];
	            Upper[s[i] - 'A'] = 0;
	        }
	    }
	    return res;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends