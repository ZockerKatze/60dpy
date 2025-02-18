class Solution:
    def recursion(self , n): 
        if n == 1 or n == 0: return 1
        else: return n*sol.recursion(n-1)
sol = Solution(); print(sol.recursion(100))