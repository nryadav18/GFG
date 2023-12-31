//{ Driver Code Starts
// C++ implementation to convert a
// sentence into its equivalent
// mobile numeric keypad sequence
#include <bits/stdc++.h>
using namespace std;
string printSequence(string input);
// Driver function
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
    {
        string s;
        getline(cin,s);
        cout<<printSequence(s)<<endl;
    }
	return 0;
}

// } Driver Code Ends


string printSequence(string S)
{
    //code here.
    unordered_map<char,string>um;
    um['A'] = "2" , um['B'] = "22" , um['C'] = "222" , um['D'] = "3" , um['E'] = "33" , um['F'] = "333";
    um['G'] = "4" , um['H'] = "44" , um['I'] = "444" , um['J'] = "5" , um['K'] = "55" , um['L'] = "555";
    um['M'] = "6" , um['N'] = "66" , um['O'] = "666" , um['P'] = "7" , um['Q'] = "77" , um['R'] = "777";
    um['S'] = "7777" , um['T'] = "8" , um['U'] = "88" , um['V'] = "888" , um['W'] = "9" ,  um['X'] = "99";
    um['Y'] = "999" , um['Z'] = "9999" , um[' '] = "0";
    string res;
    for (auto i:S){
        res += um[i];
    }
    return res;
}