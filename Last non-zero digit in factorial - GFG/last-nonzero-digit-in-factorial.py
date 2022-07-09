#User function Template for python3


class Solution:
    def lastNon0Digit (self, n):
        # code here
        def fact(n):
            if n==0:
                return 1
            else:
                return n*fact(n-1)
        res=fact(n)
        while(res):
            if res%10==0:
                res//=10
            else:
                return res%10
    


#{ 
#  Driver Code Starts
#Initial Template for Python 3



if __name__ == '__main__': 
    ob = Solution()
    t = int (input ())
    for _ in range (t):
        N = int(input())
        ans = ob.lastNon0Digit(N);
        print(ans)




# } Driver Code Ends