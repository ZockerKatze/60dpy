class Solution:
    def check(self, x):
        return x % 3 == 0 and x % 5 == 0
sol = Solution() ; print(sol.check(15))