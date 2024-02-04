//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    set<string>sos;
    private:
        void recFun(string s,int i,int j){
            if (i >= j){
                sos.insert(s);
                return;
            }
            for (int k = i ; k <= j ; k++){
                swap(s[i],s[k]);
                recFun(s,i+1,j);
                swap(s[i],s[k]);
            }
        }
	public:
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string>v;
		    int n = S.length();
		    recFun(S,0,n-1);
		    for (auto it : sos){
		        v.push_back(it);
		    }
		    return v;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends