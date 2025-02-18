class Solution:
    def main(self, n):
        if n == 1 or n == 0: 
            return 1
        else:
            return n* sol.main(n-1)

sol = Solution() 
print(sol.main(5))