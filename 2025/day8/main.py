class Solution:
    def fib(self,n):
        f = [1,1]
        for _ in range(n-1):
            f+=[f[-1]+f[-2]]
        return f[n]


sol = Solution()
print(sol.fib(100))