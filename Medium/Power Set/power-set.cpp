//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here4
		    int n = s.length();
		    int size = n;
        	int sq = 1<<n;
        	int ind , t;
        	vector<string>res;
        	for (int i = 0 ; i < sq ;i++){
        	   //cout << i << " ";
        	   ind = 0;
        	   t = i;
        	   string str;
        	   while (t){
        	        //cout << ind << " ";
        	        if (t&1){
        	            str += s[ind];
        	        }
        	        t >>= 1;
        	        ind++;
        	    }
        	    //cout << endl;
        	    if (str.size()!=0) res.push_back(str);
        	}
        // 	for (auto it:res){
        // 	    for (auto ls:it){
        // 	        cout << ls << " ";
        // 	    }
        // 	    cout << endl;
        // 	}
            sort(res.begin(),res.end());
            return res;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends