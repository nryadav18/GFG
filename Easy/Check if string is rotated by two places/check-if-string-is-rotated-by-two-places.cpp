//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    private:
        void anti_clockwise(string &s){
            reverse(s.begin(),s.begin()+2);
            reverse(s.begin()+2,s.end());
            reverse(s.begin(),s.end());
        }
    private:
        void clockwise(string &s){
            reverse(s.begin(),s.end()-2);
            reverse(s.end()-2,s.end());
            reverse(s.begin(),s.end());
        }
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        int n = str1.length() , m = str2.length();
        if (n==2 and str1!=str2) return false; 
        if (n==2 and str1==str2) return true;
        if (str1==str2) return false;
        if (n!=m) return false;
        anti_clockwise(str1);
        if (str1==str2) return true;
        //cout << str1 <<  " ";
        clockwise(str1);
        clockwise(str1);
        //cout << str1 << " ";
        if (str1==str2) return true;
        return false;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends