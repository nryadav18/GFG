class Solution {
  public:
    int substrCount(string &s, int k) {
        // code here
        int n = s.length(), cnt = 0;
        unordered_map<char,int>ump;
        for (int i=0;i<k;i++) ump[s[i]]++;
        // for (auto it : ump) cout << it.first << " " << it.second << endl;
        // cout << endl;
        if (ump.size() == k-1) cnt++;
        for (int i=k;i<n;i++){
            ump[s[i-k]]--;
            if (ump[s[i-k]] == 0){
                ump.erase(s[i-k]);
            }
            ump[s[i]]++;
            if (ump.size() == k-1) cnt++;
            // for (auto it : ump) cout << it.first << " " << it.second << endl;
            // cout << endl;
        }
        return cnt;
    }
};