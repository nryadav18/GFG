class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        int maxLength = 0, i = 0, j = 0, n = arr.size();
        unordered_map<int,int>ump;
        while (i < n){
            ump[arr[i]]++;
            if (ump.size() <= 2){
                maxLength = max(maxLength, i-j+1);
            }
            while (j < i and ump.size() > 2){
                ump[arr[j]]--;
                if (ump[arr[j]] == 0){
                    ump.erase(arr[j]);
                }
                j++;
            }
            i++;
        }
        return maxLength;
    }
};