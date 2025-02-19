class Solution:
    def istschaltjahr(self, n):
        if n / 4 != 100: return True
        else: return False
sol = Solution() ; print(sol.istschaltjahr(2028))