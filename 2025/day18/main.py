class Solution:
    def iseven(self,x):
        if x % 2 != 0: return "odd"
        else: return "even"

sol = Solution()
print(sol.iseven(1))