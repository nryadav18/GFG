//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

 
class Solution
{
  public:
    string arrangeString(string str)
    {
        //code here.
        int val = 0;
        vector<int>v(26,0);
        for (auto it : str){
            if (it >= '0' and it <= '9'){
                val += it - '0';
            }
            else{
                v[it-'A']++;
            }
        }
        string jyo;
        string s = to_string(val);
        for (int i=0;i<26;i++){
            if (v[i] != 0){
                while (v[i]--){
                    jyo += char(int(i) + int('A'));
                }
            }
        }
        if (val != 0) jyo += s;
        return jyo;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.arrangeString(s) << endl;
    }
return 0;
}


// } Driver Code Ends