#User function Template for python3

#User function Template for python3
class Solution:
    def armstrongNumber (self, n):
        # code here 
        temp = n
        a = n%10
        n=n//10
        b=n%10
        n=n//10
        c=n
        res = pow(a,3)+pow(b,3)+pow(c,3)
        if (res==temp): return "Yes"
        else: return "No"

#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n = input()
        n=int(n)
        ob = Solution()
        print(ob.armstrongNumber(n))
# } Driver Code Ends