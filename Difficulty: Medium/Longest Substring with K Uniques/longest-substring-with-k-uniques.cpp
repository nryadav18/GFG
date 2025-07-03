class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int maxLength = -1, i = 0, j = 0, n = s.length();
        unordered_map<char,int>ump;
        while (i < n){
            ump[s[i]]++;
            if (ump.size() == k){
                maxLength = max(maxLength, i - j + 1);
            }
            while (j < i and ump.size() > k){
                ump[s[j]]--;
                if (ump[s[j]] == 0){
                    ump.erase(s[j]);
                }
                j++;
            }
            i++;
        }
        return maxLength;
    }
};