//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

string rev(string s){
    int n=s.length();
    for (int i=0;i<n/2;i++){
        char temp = s[i];
        s[i] = s[n-1-i];
        s[n-1-i] = temp;
    }
    return s;
}

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string s1,s2,s3;
        int n = S.length(); //10
        int tc=0; //0
        for (int i=0;i<n;i++){
            if (S[i]=='.'){
                tc++;
            }
        }
        // tc = 2
        if (tc==0) return S;
        bool flag = false;
        int cnt=0; //0
        if (S[n-1]=='.'){
            flag = true;
        }
        for (int i=n-1;i>=0;i--){ //9 8 7 6 5 4 3 2 1
            if (S[i]=='.'){
                s1=""; //
                cnt++; //2
            }
            s1+=S[i]; //ppc //.evol //.
            if (S[i-1]=='.'){
                s2 += rev(s1);//cpp.love
                if (cnt==0){
                    s2+='.';
                }
            }
            if (tc==cnt and i==0){ //2!=0 1!=0 1!=0 2==2
                s2+=rev(s1);
            }
        }
        s2.pop_back();
        if (flag==true){
            s3+='.';
            s3+=s2;
        }
        else{
            s3 = s2;
        }
        //cout << s3 << endl;
        return s3;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends