//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            //code here
            vector<int>v;
            int a = txt.length();
            int b = pat.length();
            if (b>a) return {-1};
            for (int i=0;i<a-b+1;i++){
                if (pat[0]==txt[i]){
                    bool flag = true;
                    for (int j=1;j<b;j++){
                        if (pat[j]!=txt[j+i]){
                            flag = false;
                            break;
                        }
                    }
                    if (flag){
                        v.push_back(i+1);
                    }
                }
            }
            if (v.size()==0) return {-1};
            return v;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends