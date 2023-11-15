#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends
#User function Template for python3

class Solution:
    def dss(self,s):
        n=len(s)
        dp=[None]*(n+1)
        dp[0]=1
        ls={}
        for i in range(1,n+1):
            dp[i]=2*dp[i-1]
            if s[i-1] in ls:
                dp[i]-=dp[ls[s[i-1]]-1]
            ls[s[i-1]]=i
        return dp[n]

    def betterString(self, str1, str2):
        if self.dss(str1)>=self.dss(str2):
            return str1
        else:
            return str2

#{ 
 # Driver Code Starts.
if __name__ == '__main__': 
    t = int(input ())
    for _ in range (t):
        str1 = input()
        str2 = input()
        ob = Solution()
        res = ob.betterString(str1, str2)
        print(res)
# } Driver Code Ends