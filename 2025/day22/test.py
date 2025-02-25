class Solution:
    def check(self, x):
        if x % 3 == 0 and x % 5 == 0:
            return True
        else:
            return False
sol = Solution() ; print(sol.check(15))