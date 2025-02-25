class Solution:
    def isthing(self,x):
        if x / 3 and x / 5: return True;
        else: return False
sol = Solution() ; print(sol.isthing(1))